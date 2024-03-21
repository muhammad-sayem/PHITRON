from django.urls import path, include
from . import views

urlpatterns = [
    path('', views.home, name='homepage'),
    path('about/', views.about, name='aboutpage'),
    path('form/', views.submit_form, name='submit_form'),
    path('django_form/', views.passwordValidation, name='django_form'),     # views.DjangoForm, views.StudentForm, views.passwordValidation ei 3 tai (name='django_form') ei url diye connect kore kaj korse module e #
]
