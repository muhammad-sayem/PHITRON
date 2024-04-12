from django.shortcuts import render, redirect
from .forms import MusicianForm
from .models import Musician
from django.contrib import messages
from django.views.generic.edit import CreateView, UpdateView
from django.urls import reverse_lazy 

# Create your views here.

class add_musician(CreateView):
    model = Musician
    form_class = MusicianForm
    template_name = 'add_musician.html'
    success_url = reverse_lazy("add_musician")


# def edit_musician(request):
#     if request.method == 'POST':
#         edit_musician_form = MusicianForm(request.POST, instance = request.user)

#         if edit_musician_form.is_valid():
#             edit_musician_form.save()
#             messages.success(request, 'Musician profile updated Successfully')
#             return redirect('homepage')
#     else:
#         edit_musician_form = MusicianForm(instance = request.user)

#     return render(request, 'add_musician.html', {'form': edit_musician_form})

class edit_musician(UpdateView):
    model = Musician
    template_name = "add_musician.html"
    form_class = MusicianForm
    success_url = reverse_lazy("homepage")