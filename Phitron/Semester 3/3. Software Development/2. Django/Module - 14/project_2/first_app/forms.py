from django import forms
from . models import StudentModel

class StudentForm(forms.ModelForm):
    class Meta:
        model = StudentModel
        fields = '__all__'
        # exclude = ['address']         # Address baad e baki shob show korbe
        labels = {
            'name': 'Student Name',
            'roll': 'Student Roll'
        }

        widgets = {
            # 'name': forms.TextInput(attrs = {'class': 'btn btn-warning'}),
            'name': forms.TextInput(),
            # 'roll' : forms.PasswordInput()
        }

        help_texts = {
            'name': "Write your full name",
            'roll': "Enter your roll number"
        }

        error_messages = {
            'name': {'required': 'Your name is required'}
        }