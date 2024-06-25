from django.shortcuts import render, redirect
from django.views.generic import FormView, UpdateView, CreateView
from django.views import View
from .forms import UserRegistrationForm, UserUpdateForm
from django.urls import reverse_lazy
from django.contrib.auth import login, logout
from django.contrib.auth.views import LoginView, LogoutView
from django.contrib.auth.models import User
from .models import UserBankAccount, UserAddress
# Create your views here.


class UserRegistrationView(FormView):
    form_class  = UserRegistrationForm
    template_name = 'accounts/user_registration.html'
    success_url = reverse_lazy('register')

    # Registration er sathe sathe login o hoy ei code e
    def form_valid(self, form):
        # print(form.cleaned_data)
        user = form.save()
        login(self.request, user)
        # print(user)

        return super().form_valid(form)   # form_valid function call hobe jodi shb thik thake

    # Registration er sathe sathe login hoy na ei code e

    # def form_valid(self, form):
    #     # print(form.cleaned_data)
    #     form.save()
    #     # print(user)

    #     return redirect('homepage')
    

# class UserRegistrationView(CreateView):
#     form_class = UserRegistrationForm
#     template_name = 'accounts/user_registration.html'
#     success_url = reverse_lazy('register')

#     def form_valid(self, form):
#         user = form.save()
#         login(self.request, user)
#         return super().form_valid(form)


class UserLoginView(LoginView):
    template_name = 'accounts/user_login.html'
    success_url = reverse_lazy('homepage')

    # def get_success_url(self):
    #     return reverse_lazy('homepage')
    
    
class UserLogoutView(LogoutView):
    def get_success_url(self):
        if self.request.user.is_authenticated:
            logout(self.request)
        return reverse_lazy('homepage')
    
     
class UserBankAccountUpdateView(View):
    template_name = 'accounts/profile.html'

    def get(self, request):
        form = UserUpdateForm(instance=request.user)
        return render(request, self.template_name, {'form': form})

    def post(self, request):
        form = UserUpdateForm(request.POST, instance=request.user)
        if form.is_valid():
            form.save()
            return redirect('profile')  # Redirect to the user's profile page
        return render(request, self.template_name, {'form': form})
    

