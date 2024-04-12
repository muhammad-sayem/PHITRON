from django.shortcuts import render, redirect
from .forms import RegisterForm
from django.contrib import messages
from django.views.generic import CreateView
from django.contrib.auth.views import LoginView, LogoutView
from django.urls import reverse_lazy
from django.contrib import messages
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from musicians.forms import MusicianForm

# Create your views here.

class register(CreateView):
    form_class = RegisterForm
    template_name = 'register.html'
    success_url = reverse_lazy('homepage')


class user_login(LoginView):
    template_name = 'login.html'
    
    def get_success_url(self):
        return reverse_lazy('homepage')

    def form_valid(self, form):
        messages.success(self.request, 'Logged in Successfully')
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.success(self.request, 'Incorrect information')
        return super().form_invalid(form)   

def user_logout(request):
    logout(request)
    return redirect('user_login')


def profile(request):
    return render(request, 'profile.html')

