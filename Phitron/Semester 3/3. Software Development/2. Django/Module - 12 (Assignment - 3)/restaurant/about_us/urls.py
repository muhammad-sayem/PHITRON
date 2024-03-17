from django.urls import path, include
from . import views

urlpatterns = [
    path('about_us', views.about_us, name='about_us')
]