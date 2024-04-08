from django import forms
from django.contrib.auth.models import User 
from django.contrib.auth.forms import UserCreationForm, UserChangeForm
from .models import Musician

class RegisterForm(UserCreationForm):
    first_name = forms.CharField(widget = forms.TextInput(attrs={'id': 'required'}))
    last_name = forms.CharField(widget = forms.TextInput(attrs={'id': 'required'}))
    phone_number = forms.CharField(max_length = 11)
    instrument_type = forms.CharField(max_length = 30)

    class Meta:
        model = User
        fields = ['username', 'first_name', 'last_name', 'email', 'phone_number', 'instrument_type']

    
class MusicianForm(forms.ModelForm):
    class Meta:
        model = Musician
        fields = '__all__'