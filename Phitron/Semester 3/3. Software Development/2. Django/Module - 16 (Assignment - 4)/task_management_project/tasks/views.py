from django.shortcuts import render, redirect
from .forms import TaskForm

# Create your views here.

def add_task(request):
    if request.method == 'POST':
        task_form = TaskForm(request.POST)
        if task_form.is_valid():
            task_form.save()
            redirect('homepage')
    else:
        task_form = TaskForm()
    return render(request, 'add_task.html', {'form': task_form})