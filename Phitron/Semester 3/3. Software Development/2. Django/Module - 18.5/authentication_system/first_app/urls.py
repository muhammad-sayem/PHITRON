from django.urls import path, include
from . import views 

urlpatterns = [
    path('', views.home, name = 'homepage'),
    path('profile/', views.profile, name = 'profile'),
    path('signup/', views.signup, name = 'signup'),
    path('login/', views.user_login, name = 'login'),
    path('logout/', views.user_logout, name = 'logout'),
    path('change_pass_1/', views.change_pass_1, name = 'change_pass_1'),
    path('change_pass_2/', views.change_pass_2, name = 'change_pass_2'),
]