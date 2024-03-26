from django import forms
from django.core import validators
import datetime

class PracticeForm(forms.Form):
    roll = forms.IntegerField(label = 'User Roll Number')
    name = forms.CharField(label = 'User Name', max_length = 20, help_text = 'Enter you full name here', initial = 'Enter your name')
    email = forms.EmailField(help_text = 'Enter you valid Email Address')
    agree = forms.BooleanField(required = False, help_text = 'Do you agree with our terms and conditions?')
    date = forms.DateField()
    appoinment_date = forms.DateField(widget = forms.NumberInput(attrs = {'type': 'date'}))
    BIRTH_YEAR_CHOICES = ['1995', '1996', '1997']
    birth_year = forms.DateField(widget = forms.SelectDateWidget(years = BIRTH_YEAR_CHOICES))
    day = forms.DateField(initial = datetime.date.today)
    decimal_value = forms.DecimalField()

    FAVOURITE_COLORS = [('blue', 'Blue'), ('red', 'Red'), ('green', 'Green')]
    favourite_color = forms.ChoiceField(choices = FAVOURITE_COLORS)

    FAVOURITE_FRUITS = [('mango', 'Mango'), ('orange', 'Orange'), ('apple', 'Apple')]
    favourite_fruits = forms.ChoiceField(widget = forms.RadioSelect, choices = FAVOURITE_FRUITS)

    FAVOURITE_FAST_FOODS = [('pizza', 'Pizza'), ('burger', 'Burger'), ('chicken roll', 'Chicken Roll')]
    favourite_fast_foods = forms.MultipleChoiceField(choices = FAVOURITE_FAST_FOODS)

    FAVOURITE_PLACES = [('bandarbans', 'Bandarbans'), ('sajek', 'Sajek'), ('sundarbans', 'Sundarbans')]
    favourite_places = forms.MultipleChoiceField(widget = forms.CheckboxSelectMultiple, choices = FAVOURITE_PLACES)
    
    comment = forms.CharField(widget = forms.Textarea(attrs={'rows':3}))
