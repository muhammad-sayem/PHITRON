from django.shortcuts import render
from . forms import PracticeForm
from . import models

# Create your views here.

def home(request):
    return render(request, 'home.html')

def submit_form(request):
    return render(request, 'form.html')

def DjangoForm(request):
    if request.method == 'POST':
        form = PracticeForm(request.POST, request.FILES)
        if form.is_valid():
            print(form.cleaned_data)
            return render(request, 'django_form.html', {'form': form})
    else:
        form = PracticeForm()
    return render(request, 'django_form.html', {'form': form})

def StudentModel(request):
    student = models.StudentModel.objects.all()
    print(student)
    return render(request, 'student_model.html', {'data': student})



