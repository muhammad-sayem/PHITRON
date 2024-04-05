from django.shortcuts import render, redirect
from .forms import RegisterForm, UserChangeForm
from django.contrib import messages
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from django.contrib.auth.forms import AuthenticationForm, SetPasswordForm, PasswordChangeForm

# Create your views here.

def home(request):
    return render(request, 'home.html')


def profile(request):
    return render(request, 'profile.html')


def signup(request):
    if not request.user.is_authenticated:
        if request.method == 'POST':
            register_form = RegisterForm(request.POST)

            if register_form.is_valid():
                messages.success(request, 'Account Created Successfully!!')
                register_form.save()
                return redirect('profile')
        else:
            register_form = RegisterForm()
        return render(request, 'signup.html', {'form': register_form})
    
    else:
        return render('profile')


def user_login(request):
    if not request.user.is_authenticated:
        if request.method == 'POST':
            form = AuthenticationForm(request = request, data = request.POST)

            if form.is_valid():
                user_name = form.cleaned_data['username']
                user_pass = form.cleaned_data['password']

                user = authenticate(username = user_name, password = user_pass)

                if user is not None:
                    messages.success(request, 'Logged in successfully!!')
                    login(request, user)
                    return redirect('profile')
        else:
            form = AuthenticationForm()
            return render(request, 'login.html', {'form': form})
        
    else:
        return redirect('profile')
    

def user_logout(request):
    messages.success(request, 'Logged out successfully!!')
    logout(request)
    return redirect('homepage')


def change_pass_1(request):
    if request.user.is_authenticated:
        if request.method == 'POST':
            form = PasswordChangeForm(user = request.user, data = request.POST)
            if form.is_valid():
                form.save()
                update_session_auth_hash(request, form.user)
                return redirect('profile')
        else:
            form = PasswordChangeForm(user = request.user)
        return render(request, 'change_pass.html', {'form': form})
    
    else:
        return redirect('login')
    

def change_pass_2(request):
    if request.user.is_authenticated:
        if request.method == 'POST':
            form = SetPasswordForm(user = request.user, data=request.POST)

            if form.is_valid():
                form.save()
                update_session_auth_hash(request, form.user)
                return redirect('profile')
        else:
            form = SetPasswordForm(user = request.user)  
        return render(request, 'change_pass.html', {'form': form})
    
    else:
        return redirect('login')


            
