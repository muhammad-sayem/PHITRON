from django import forms 
from django.core import validators

class contactForm(forms.Form):
    name = forms.CharField(label="User Name", help_text="Total length must be within 50 characters", required = False, disabled = False, widget = forms.Textarea(attrs = {'id': 'text_area', 'class': 'class1 class2', 'placeholder': 'Enter your full name'}))
    file = forms.FileField(required = False)
    email = forms.EmailField(label = "User Email")
    # age = forms.IntegerField()
    age = forms.CharField(widget = forms.NumberInput)
    weight = forms.FloatField()
    balance = forms.DecimalField()
    check = forms.BooleanField()
    birthday = forms.DateField(widget = forms.DateInput(attrs = {'type': 'date'}))
    # birthday = forms.CharField(widget = forms.DateInput(attrs = {'type': 'date'}))        # Mone na thakle shobkichur pore .Charfield diye widget diye change kore dilei hoy #
    appoinment = forms.DateTimeField(widget = forms.DateInput(attrs = {'type': 'datetime-local'}))
    CHOICES = [('S', 'Small'), ('M', 'Medium'), ('L', 'Large')]
    size = forms.ChoiceField(choices = CHOICES, widget = forms.RadioSelect)
    MEAL = [('P', 'Pepperoni'), ('M', 'Mashroom'), ('B', 'Beef')]
    pizza = forms.MultipleChoiceField(choices = MEAL, widget = forms.CheckboxSelectMultiple)


# -----------------> Form Validators (Without Builtin) <------------------ #

# class StudentData(forms.Form):
#     name = forms.CharField(widget = forms.Textarea)
#     email = forms.CharField(widget = forms.EmailInput)

#     # def clean_name(self):       # Validation korar jonno clean_(jeta validation korte chai shetar name) eta use kora hoy
#     #     valname = self.cleaned_data['name']

#     #     if len(valname) < 10:
#     #         raise forms.ValidationError("Enter a name with at least 10 characters")
#     #     else:
#     #         return valname
        
#     # def clean_email(self):
#     #     valemail = self.cleaned_data['email']
        
#     #     if '.com' not in valemail:
#     #         raise forms.ValidationError("Your email address must contain .com")
#     #     else:
#     #         return valemail

#     def clean(self):        # Jate kore ei ekta fuction er moddho diye all validations amra korte pari
#         cleaned_data = super().clean()

#         valname = self.cleaned_data['name']
#         valemail = self.cleaned_data['email']

#         if len(valname) < 10:
#             raise forms.ValidationError("Enter a name with at least 10 characters")
#         if ".com" not in valemail:
#             raise forms.ValidationError("Email must contain .com")


# -------------> Builtin Form Validators <-------------- #
    
def len_check(val):
    if len(val) < 10:
        raise forms.ValidationError("Enter a text with at least 10 characters")

class StudentData(forms.Form):
    name = forms.CharField(validators = [validators.MinLengthValidator(10,  message = "Enter a name with at least 10 characters")], label = 'Full Name', help_text = 'Total length must be within 50 characters')
    text = forms.CharField(widget = forms.TextInput, validators = [len_check])
    email = forms.CharField(widget = forms.EmailInput, validators = [validators.EmailValidator(message = "Enter a valid email address")])
    age = forms.IntegerField(validators = [validators.MinValueValidator(24, message = "Age must be at least 24"), validators.MaxValueValidator(34, message = "Age must be maximum 34")])

    file = forms.FileField(validators = [validators.FileExtensionValidator(allowed_extensions = ['pdf', 'png', 'jpg'], message = "The file must be contain PDF format")])

class passwordValidationProject(forms.Form):
    name = forms.CharField(validators = [validators.MinLengthValidator(5, message = 'User name must contain at least 5 characters')])
    password = forms.CharField(widget = forms.PasswordInput)
    confirm_password = forms.CharField(widget = forms.PasswordInput)

    def clean(self):
        cleaned_data = super().clean()

        # username = self.cleaned_data['name']
        val_pass = self.cleaned_data['password']
        val_confirm_pass = self.cleaned_data['confirm_password']

        # if len(username) < 5:
        #     raise forms.ValidationError("User name must contain at least 5 characters")

        if val_pass != val_confirm_pass:
            raise forms.ValidationError("Password doesn't match!!")