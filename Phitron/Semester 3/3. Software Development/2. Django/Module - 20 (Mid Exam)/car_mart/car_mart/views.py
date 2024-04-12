from django.shortcuts import render, redirect
from cars.models import Car
from brands.models import Brand

def home(request, brand_slug = None):
    brandData = Brand.objects.all()
    carData = Car.objects.all()

    if brand_slug is not None:
        brand = Brand.objects.get(slug = brand_slug)
        carData = Car.objects.filter(brand = brand)
    brands = Brand.objects.all()

    return render(request, 'home.html', {'brandData': brandData, 'carData': carData, 'brand': brands})