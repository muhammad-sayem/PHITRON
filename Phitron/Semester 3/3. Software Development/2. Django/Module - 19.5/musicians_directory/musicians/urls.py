from django.urls import path, include
from . import views
from django.contrib.auth.views import LogoutView

urlpatterns = [
    path('register/', views.register, name = 'register'),
    path('login/', views.UserLoginView.as_view(), name = 'login'),
    path('logout/', views.user_logout, name = 'logout'),
    # path('logout/', views.LogoutView.as_view(), name = 'logout'),
    path('profile/', views.profile, name = 'profile'),
    # path('add_musician/', views.add_musician, name = 'add_musician'),
    path('add_musician/', views.AddMusician.as_view(), name = 'add_musician'),
    path('edit/<int:id>', views.edit_musician, name = 'edit_musician'),
]