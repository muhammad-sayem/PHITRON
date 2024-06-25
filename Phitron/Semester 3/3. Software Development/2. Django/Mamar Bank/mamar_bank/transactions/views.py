from django.shortcuts import render, redirect
from django.views.generic import CreateView, ListView, View
from django.contrib.auth.mixins import LoginRequiredMixin
from .models import Transaction
from .forms import DepositForm, WithdrawForm, LoanRequestForm
from .constrants import DEPOSIT, WITHDRAWAL, LOAN, LOAN_PAID, TRANSFER, RECIEVED
from django.contrib import messages
from django.http import HttpResponse
from datetime import datetime
from django.db.models import Sum
from django.shortcuts import get_object_or_404
from django.urls import reverse_lazy
from .forms import TransferMoneyForm
from accounts.models import UserBankAccount
from django.core.mail import EmailMessage, EmailMultiAlternatives
from django.template.loader import render_to_string
# Create your views here.

# Ei view ke inherit kore deposit, withdraw, loan er kaaj o kora hobe

class TransactionCreateMixin(LoginRequiredMixin, CreateView):
    template_name = 'transactions/transaction_form.html'
    model = Transaction
    title = ''
    success_url = reverse_lazy('transaction_report')

    def get_form_kwargs(self):
        kwargs = super().get_form_kwargs()
        kwargs.update({
            'account': self.request.user.account,
        })
        return kwargs

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context.update({
            'title': self.title
        })
        return context


class DepositMoneyView(TransactionCreateMixin):
    form_class = DepositForm
    title = 'Deposit'
    # template_name, success_url, model egula inherit hoye gese tai ar alada lekha lage nai

    def get_initial(self):
        initial = {'transaction_type': DEPOSIT}
        return initial
    
    def form_valid(self, form):
        amount = form.cleaned_data.get('amount')
        account = self.request.user.account
        account.balance += amount   # age 500 thakle, pore 1000 amount add korle balance er sathe 1000 add hoye balance 1500 hoye jabe
        account.save(
            update_fields = ['balance']
        )

        messages.success(self.request, f"{amount}$ is deposited successfully!!")

        mail_subject = 'Deposite Message'
        message = render_to_string('transactions/deposite_email.html', {
            'user': self.request.user,
            'amount': amount,
        })
        to_email = self.request.user.email
        send_email = EmailMultiAlternatives(mail_subject, '', to=[to_email])
        send_email.attach_alternative(message, 'text/html')
        send_email.send()
        return super().form_valid(form)
    

class WithdrawMoneyView(TransactionCreateMixin): 
    form_class = WithdrawForm
    title = 'Withdraw Money'
    # template_name, success_url, model egula inherit hoye gese tai ar alada lekha lage nai

    def get_initial(self):
        initial = {'transaction_type': WITHDRAWAL}
        return initial
    
    def form_valid(self, form):
        amount = form.cleaned_data.get('amount')
        account = self.request.user.account
        account.balance -= amount   # age 1000 thakle, pore 500 amount add korle balance tehke 500 taka kome jabe
        account.save(
            update_fields = ['balance']
        )

        messages.success(self.request, f"Successfully withdrawn {amount}$ from your account!!")

        return super().form_valid(form)



class LoanRequestView(TransactionCreateMixin):
    form_class = LoanRequestForm
    title = 'Request For Loan'
    # template_name, success_url, model egula inherit hoye gese tai ar alada lekha lage nai

    def get_initial(self):
        initial = {'transaction_type': LOAN}
        return initial
    
    def form_valid(self, form):
        amount = form.cleaned_data.get('amount')
        current_loan_count = Transaction.objects.filter(account = self.request.user.account, transaction_type = LOAN, loan_approve = True).count()

        if current_loan_count > 2:
            return HttpResponse("You have crossed loan limit!!")
        
        messages.success(self.request, f"Loan request for {amount}$ has been successfully sent to admin!!")
        return super().form_valid(form)
    

class TransactionReportView(LoginRequiredMixin, ListView):
    template_name = 'transactions/transaction_report.html'
    model = Transaction
    balance = 0

    def get_queryset(self):
        # Jodi user kono filter na kore taile tar shob transaction dekhabo

        queryset = super().get_queryset().filter(account = self.request.user.account)       # logged in user er account er shb kisu store kortese queryset

        start_date_str = self.request.GET.get('start_date')
        end_date_str = self.request.GET.get('end_date')

        if start_date_str and end_date_str: # Jodi satrt date and ednd date dui tai thik moto thake taile filter kora start korbe naile na
            start_date = datetime.strptime(start_date_str, '%Y-%m-%d').date()
            end_date = datetime.strptime(start_date_str, '%Y-%m-%d').date()
            queryset = queryset.filter(timestamp__date__gte=start_date, timestamp__date__lte=end_date)
            
            self.balance = Transaction.objects.filter(
                timestamp__date__gte=start_date, timestamp__date__lte=end_date
            ).aggregate(Sum('amount'))['amount__sum']

        else:
            self.balance = self.request.user.account.balance
        return queryset
    
    # Optional
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context.update({
            'account': self.request.user.account
        })
        return context
    

class PayLoanView(LoginRequiredMixin, View):
    def get(self, request, id):
        loan = get_object_or_404(Transaction, id=id)
        print(loan)
        if loan.loan_approve:
            user_account = loan.account
                # Reduce the loan amount from the user's balance
                # 5000, 500 + 5000 = 5500
                # balance = 3000, loan = 5000
            if loan.amount < user_account.balance:
                user_account.balance -= loan.amount
                loan.balance_after_transaction = user_account.balance
                user_account.save()
                loan.loan_approved = True
                loan.transaction_type = LOAN_PAID
                loan.save()
                return redirect('loan_list')
            else:
                messages.error(
            self.request,
            f'Loan amount is greater than available balance'
        )

        return redirect('loan_list')

class LoanListView(LoginRequiredMixin, ListView):
    model  = Transaction
    template_name = 'transactions/loan_request.html'
    context_object_name = 'loans'

    def get_queryset(self):
        user_account = self.request.user.account
        queryset = Transaction.objects.filter(account = user_account, transaction_type = LOAN)
        return queryset
    

class TransferMoneyView(View):
    template_name = 'transactions/transfer_money.html'

    def get(self, request):
        form = TransferMoneyForm()
        return render(request, self.template_name, {'form': form})
    
    def post(self, request):
        form = TransferMoneyForm(request.POST)

        if form.is_valid():
            amount = form.cleaned_data['amount']
            to_user_id = form.cleaned_data['to_user_id']
            current_user = request.user.account         # accounts/models .py/'user' field er related_name = 'account' deya tai request.user.account deya hoise

                  # 1) Jei user er kasse trasfer kora hobe taake ber kore anlam. 2)Ekta data pete chaile .get use kore ar multiple data pete chaile .filter use kore

            try:
                to_user = UserBankAccount.objects.get(account_no = to_user_id)

            except UserBankAccount.DoesNotExist:
                messages.error(request, "User does not exist!!")
                return render(request, self.template_name, {'form': form})

            
            try:
                if current_user.balance < amount:
                    messages.error(request, "Insufficient balance.")
                    return render(request, self.template_name, {'form': form})
        

                current_user.balance -= amount
                current_user.save()

                to_user.balance += amount
                to_user.save()

                Transaction.objects.create(
                    account = current_user,
                    amount = amount,
                    balance_after_transaction = current_user.balance,
                    transaction_type = TRANSFER,
                )

                Transaction.objects.create(
                    account = to_user,
                    amount = amount,
                    balance_after_transaction = to_user.balance,
                    transaction_type = RECIEVED,
                )

                messages.success(request,f"Successfully transferred {amount}$")
            
            except UserBankAccount.DoesNotExist:
                messages.error(request, 'User Does not exist!!')

            return render(request, self.template_name, {'form': form})

def invalid_page(request):
    return render(request, 'invalid.html')