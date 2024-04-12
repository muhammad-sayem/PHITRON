from django.urls import path, include
from . import views

urlpatterns = [
    path('register/', views.registerClass.as_view(), name = 'register'),
    # path('user_login/', views.user_login.as_view(), name = 'user_login'),
    path('user_login/', views.UserLoginView.as_view(), name = 'user_login'),
    path('user_logout/', views.user_logout, name = 'user_logout'),
    path('profile/', views.profile, name = 'profile'),
    path('profile/edit_profile/', views.edit_profile, name = 'edit_profile'),
]