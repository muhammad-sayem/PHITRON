from django.shortcuts import render, redirect
from .forms import RegisterForm
from django.contrib import messages
from django.contrib.auth.views import LoginView, LogoutView
from django.urls import reverse_lazy
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from .forms import MusicianForm
from django.views.generic import FormView, UpdateView
from .models import Musician
from django.contrib.auth.models import User

# Create your views here.

def register(request):
    if request.method == 'POST':
        register_form = RegisterForm(request.POST)
        if register_form.is_valid():
            register_form.save()
            messages.success(request, 'Account created Successfully')
            redirect('register')
    else:
        register_form = RegisterForm()
    return render(request, 'register.html', {'form': register_form, 'type': 'Register'})



class UserLoginView(LoginView):
    template_name = 'login.html'
    # success_url = reverse_lazy('homepage')
    def get_success_url(self):
        return reverse_lazy('homepage')

    def form_valid(self, form):
        messages.success(self.request, 'Logged in Successfully')
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.success(self.request, 'Incorrect information given')
        return super().form_invalid(form)
    

def user_logout(request):
    logout(request)
    return redirect('login')


def profile(request):
    return render(request, 'profile.html')



class AddMusician(FormView):
    template_name = 'add_musician.html'
    form_class = MusicianForm
    success_url = reverse_lazy('homepage')

    def form_valid(self, form):
        form.save()
        return super().form_valid(form)

    def get(self, request, *args, **kwargs):
        if request.user.is_authenticated:
            return super().get(request, *args, **kwargs)
        else:
            return redirect('login')
        
def edit_musician(request, id):
    musician = User.objects.get(pk = id)
    musician_form = MusicianForm(instance = musician)

    if request.method == 'POST':
        musician_form = MusicianForm(request.POST, instance = musician)
        if musician_form.is_valid():
            musician_form.save()
            return redirect ('homepage')
    
    return render(request, 'add_musician.html', {'form': musician_form})
    
