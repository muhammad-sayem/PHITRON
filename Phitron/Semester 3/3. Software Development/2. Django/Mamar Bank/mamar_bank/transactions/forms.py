from django import forms
from .models import Transaction

class TransactionForm(forms.ModelForm):   # Eta user ere fill up korar jonno
    class Meta:
        model = Transaction
        fields = ['amount', 'transaction_type']

    def __init__(self, *args, **kwargs):
        self.account = kwargs.pop('account')
        super().__init__(*args, **kwargs)

        self.fields['transaction_type'].disabled = True     # Ei field disabled thakbe
        self.fields['transaction_type'].widget = forms.HiddenInput()    # user er theke hide kora thakbe

    def save(self, commit = True):
        self.instance.account = self.account
        self.instance.balance_after_transaction = self.account.balance
        return super().save()
     

class DepositForm(TransactionForm):
    # Ei 2 lines na dileo kaaj kore

    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

    def clean_amount(self):     # Transaction theke 'amount' field ke filter kore niye asha...... je field ke filter kore niye asha hobe clean_ er pore oi field er name dite hoy
        min_deposit_amount = 100
        amount = self.cleaned_data.get('amount')    # user er fill up kora form theke amount field er value niye ashlam

        if amount < min_deposit_amount:
            raise forms.ValidationError(
                f'You need to deposit at least {min_deposit_amount} $'
            )
        return amount
    

class WithdrawForm(TransactionForm):
    def clean_amount(self):
        account = self.account
        min_withdraw_amount = 500
        max_withdraw_amount = 20000
        balance = account.balance
        amount = self.cleaned_data.get('amount')

        if amount < min_withdraw_amount:
            raise forms.ValidationError(
                f'You can withdraw at least {min_withdraw_amount} $'
            )

        if amount > max_withdraw_amount:
            raise forms.ValidationError(
                f'You can withdraw at most {max_withdraw_amount} $'
            )

        if amount > balance: # amount = 5000, tar balance ache 200
            raise forms.ValidationError(
                f'You have {balance} $ in your account. '
                'You can not withdraw more than your account balance'
            )

        return amount
    

class LoanRequestForm(TransactionForm):
    def clean_amount(self):
        amount = self.cleaned_data.get('amount')

        return amount
        
        
class TransferMoneyForm(forms.Form):
    amount = forms.DecimalField()
    to_user_id = forms.IntegerField()