from django.shortcuts import render, redirect
from .forms import RegisterForm, ChangeUserForm
from django.contrib import messages
from django.contrib.auth.views import LoginView, LogoutView
from django.contrib.auth.forms import AuthenticationForm
from django.urls import reverse_lazy
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from django.contrib.auth.decorators import login_required
from django.shortcuts import render, redirect, get_object_or_404
from cars.models import Car
from django.views.generic import CreateView, FormView

# Create your views here.

class registerClass(CreateView):
    template_name = 'register.html'
    success_url = reverse_lazy('user_login')
    form_class = RegisterForm


class UserLoginView(LoginView):
    template_name = 'login.html'

    def get_success_url(self):
        return reverse_lazy('profile')

    def form_valid(self, form):
        messages.success(self.request, 'Logged in Successfully!!')
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.success(self.request, 'Infomation incorrect!!')
        return super().form_invalid(form)
    

def user_logout(request):
    messages.success(request, 'logged out successfully')
    logout(request)
    return redirect('homepage')


def profile(request):
    purchased_car_id = request.session.get('purchased_car')
    purchased_car = None
    if purchased_car_id:
        purchased_car = get_object_or_404(Car, id=purchased_car_id)
    return render(request, 'profile.html', {'car': purchased_car})


@login_required
def edit_profile(request):
    if request.method == 'POST':
        profile_form = ChangeUserForm(request.POST, instance = request.user)
        if profile_form.is_valid():
            profile_form.save()
            messages.success(request, 'Profile Updated Successfully!!')
            return redirect('profile')
    else:
        profile_form = ChangeUserForm(instance = request.user)
    
    return render(request, 'update_profile.html', {'form': profile_form})