from django.urls import path, include
from . import views

urlpatterns = [
    path('add_musician/', views.add_musician.as_view(), name = 'add_musician'),
    path('edit_musician<int:pk>/', views.edit_musician.as_view(), name = 'edit_musician'),
]