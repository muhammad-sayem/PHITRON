from django.shortcuts import render
from django.http import HttpResponse

def courses(request):
    return HttpResponse("This is first_app/COURSES PAGE")

def about(request):
    return HttpResponse("This is first_app/ABOUT PAGE")

def home(request):
    return HttpResponse("This is first_app page")