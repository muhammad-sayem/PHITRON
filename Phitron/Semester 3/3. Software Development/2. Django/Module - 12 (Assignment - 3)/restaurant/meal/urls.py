from django.urls import path, include
from . import views

urlpatterns = [
    path('meal/', views.showItems, name='showItems'),
]