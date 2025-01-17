from django.urls import path, include
from . import views

urlpatterns = [
    path('register/', views.register.as_view(), name = 'register'),
    # path('register/', views.register, name = 'register'),
    path('user_login/', views.user_login.as_view(), name = 'user_login'),
    path('user_logout/', views.user_logout, name = 'user_logout'),
    path('profile/', views.profile, name = 'profile'),
]