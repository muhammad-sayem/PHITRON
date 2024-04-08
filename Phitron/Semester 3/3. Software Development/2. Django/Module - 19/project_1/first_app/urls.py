from django.urls import path, include
from . import views

urlpatterns = [
    path('', views.set_sessions),
    path('get_cookies/', views.get_cookies, name = 'cookies'),
    path('get_sessions/', views.get_sessions, name = 'sessions'),
    path('delete_cookies/', views.delete_cookies, name = 'delete_cookies'),
    path('delete_sessions/', views.delete_sessions, name = 'delete_sessions'),
]