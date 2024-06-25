from django.urls import path, include
from .views import DepositMoneyView, WithdrawMoneyView, TransactionReportView, LoanRequestView, LoanListView, PayLoanView, TransferMoneyView, invalid_page

urlpatterns = [
    path('deposit_money/', DepositMoneyView.as_view(), name = 'deposit_money'),
    path('withdraw_money/', WithdrawMoneyView.as_view(), name = 'withdraw_money'),
    path('report/', TransactionReportView.as_view(), name = 'transaction_report'),
    path('loan_request/', LoanRequestView.as_view(), name = 'loan_request'),
    path('loans/', LoanListView.as_view(), name = 'loan_list'),
    path('loan/<int:id>/', PayLoanView.as_view(), name = 'loan_pay'),
    path('tarnsfer/', TransferMoneyView.as_view(), name = 'transfer_money'),
    path('invalid/', invalid_page, name = 'invalid'),
]