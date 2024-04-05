from django import forms
from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm, UserChangeForm

class RegisterForm(UserCreationForm):
    first_name = forms.CharField(widget = forms.Textarea(attrs = {'id': 'required', 'placeholder': 'Enter your first name', 'rows':3}))
    last_name = forms.CharField(widget = forms.Textarea(attrs = {'id': 'required', 'placeholder': 'Enter your last name', 'rows':3}))
    email = forms.EmailInput(attrs = {'id': 'required', 'placeholder': 'Enter Email'})
    password1 = forms.PasswordInput(attrs = {'placeholder': 'Enter Password'})
    password2 = forms.PasswordInput(attrs = {'placeholder': 'Confirm Password'})

    class Meta:
        model = User
        fields = ['username','first_name', 'last_name', 'email']