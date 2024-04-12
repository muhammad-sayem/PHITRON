from django.urls import path, include
from . import views

urlpatterns = [
    path('car_details/<int:id>/', views.CarDetails.as_view(), name = 'car_details'),
    path('buy_now/<int:id>/', views.buy_now, name = 'buy_now'),
    path('not_available/', views.not_available, name = 'not_available'),
]