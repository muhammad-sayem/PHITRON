from django.shortcuts import render

# Create your views here.

def showItems(request):
    return render(request,'meal/index.html')
