from django.urls import path, include
from . import views
from . models import StudentModel

urlpatterns = [
    path('', views.home, name = 'homepage'),
    path('submit_form/', views.submit_form, name = 'formpage'),
    path('django_form/', views.DjangoForm, name = 'django_form'),
    path('student_model/', views.StudentModel, name = 'student_model')
]