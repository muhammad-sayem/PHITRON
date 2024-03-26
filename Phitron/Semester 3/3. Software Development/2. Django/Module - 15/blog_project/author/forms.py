from django import forms
from .models import Author

class AuthorForm(forms.ModelForm):
    class Meta:
        model = Author
        fields = '__all__'      # For all fields
        # fields = ['name', 'bio']
        # exclude = ['phone_no']