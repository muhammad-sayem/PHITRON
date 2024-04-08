from django.shortcuts import render, redirect
from .forms import RegisterForm, ChangeUserForm
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm    # Username and password thake
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
from django.contrib.auth.decorators import login_required
from django.contrib import messages
from posts.models import Post
from django.contrib.auth.views import LoginView, LogoutView
from django.urls import reverse_lazy


# Create your views here.

def register(request):
    if request.method == 'POST':
        register_form = RegisterForm(request.POST)
        if register_form.is_valid():
            register_form.save()
            messages.success(request, 'Account created Successfully!!')
            return redirect('register')
    else:
        register_form = RegisterForm()
    
    return render(request, 'register.html', {'form': register_form, 'type': 'Register'})


def user_login(request):
    if request.method == 'POST':
        form = AuthenticationForm(request, request.POST)
        if form.is_valid():
            user_name = form.cleaned_data['username']
            user_pass = form.cleaned_data['password']

            user = authenticate(username = user_name, password = user_pass)
            if user is not None:
                messages.success(request, 'Logged in Successfully!!')
                login(request, user)
                return redirect('profile')
            else:
                messages.warning(request, 'Login information incorrect!!')
                return redirect('register')   
    else:
        form = AuthenticationForm()
        return render(request, 'register.html', {'form': form, 'type': 'Login'})
    

# user_login using class based view
class UserLoginView(LoginView):
    template_name = 'register.html'
    # success_url = reverse_lazy('profile')

    def get_success_url(self):
        return reverse_lazy('profile')

    def form_valid(self, form):
        messages.success(self.request, 'Logged in Successfully!!')
        return super().form_valid(form)
    
    def form_invalid(self, form):
        messages.success(self.request, 'Infomation incorrect!!')
        return super().form_invalid(form)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context['type'] = 'Login'
        return context


    

@login_required
def profile(request):
    data = Post.objects.filter(author = request.user)
    return render(request, 'profile.html', {'data': data})


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


def pass_change(request):
    if request.method == 'POST':
        form = PasswordChangeForm(request.user, data = request.POST)
        if form.is_valid():
            form.save()
            messages.success(request, 'Password Updated Successfully!!')
            update_session_auth_hash(request, form.user)
            return redirect('profile')
    else:
        form = PasswordChangeForm(user = request.user)
    
    return render(request, 'pass_change.html', {'form': form})


def user_logout(request):
    logout(request)
    return redirect('user_login')

            
# def add_author(request):
#     if request.method == 'POST':        # User post request koreche 
#         author_form = AuthorForm(request.POST)  # User er post request data ekhane capture korlam
#         if author_form.is_valid():  # Form valid kina check korlam
#             author_form.save()      # Jodi data valid hoy tahole database e save korbo
#             return redirect('add_author')   # Shob thik thakle 'add_author' page e abar pathiye dilam
#     else:
#         author_form = AuthorForm()
#     return render(request, 'add_author.html', {'form': author_form})