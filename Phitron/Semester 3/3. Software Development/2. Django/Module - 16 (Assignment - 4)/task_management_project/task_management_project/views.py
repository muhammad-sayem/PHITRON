from django.shortcuts import render
from tasks.models import Task

def home(request):
    return render(request,'home.html')

def show_tasks(request):
    data = Task.objects.all()
    return render(request, 'show_tasks.html', {'data': data})