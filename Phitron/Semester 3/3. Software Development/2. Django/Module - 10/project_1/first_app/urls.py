from django.urls import path, include
from . import views
# from first_app.views import home
# from first_app import views

urlpatterns = [
    path('', views.home)
]