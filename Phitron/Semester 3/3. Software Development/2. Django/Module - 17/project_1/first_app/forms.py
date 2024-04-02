from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm, UserChangeForm
from django import forms

class RegisterForm(UserCreationForm):
    first_name = forms.CharField(widget = forms.TextInput(attrs={'id': 'required', 'placeholder': "Enter your first name"}))
    last_name = forms.CharField(widget = forms.TextInput(attrs={'id': 'required', 'placeholder': "Enter your last name"}))
    email = forms.CharField(widget = forms.EmailInput(attrs={'id': 'required', 'placeholder': "Enter Email"}))
    password1=forms.CharField(label='',widget=forms.PasswordInput(attrs={'placeholder':'Enter Password'}))
    password2=forms.CharField(label='',widget=forms.PasswordInput(attrs={'placeholder':'Confirm Password'}))
    
    class Meta:
        model = User
        fields = ['username', 'first_name', 'last_name', 'email']


class ChangeUserData(UserChangeForm):
    password = None
    class Meta:
        model = User
        fields = ['username', 'first_name', 'last_name', 'email']