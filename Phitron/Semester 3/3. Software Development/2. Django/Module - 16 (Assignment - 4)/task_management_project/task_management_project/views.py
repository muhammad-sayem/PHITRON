from django.shortcuts import render

def home(request):
    return render(request,'home.html')

def show_tasks(request):
    return render(request, 'show_tasks.html')