# Generated by Django 5.0.3 on 2024-04-19 16:18

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('transactions', '0002_rename_accoutn_transaction_account'),
    ]

    operations = [
        migrations.AlterField(
            model_name='transaction',
            name='transaction_type',
            field=models.IntegerField(choices=[(1, 'Deposite'), (2, 'Withdrawal'), (3, 'Loan'), (4, 'Loan Paid'), (5, 'Transfer'), (6, 'Recieved'), (None, 'None')], null=True),
        ),
    ]