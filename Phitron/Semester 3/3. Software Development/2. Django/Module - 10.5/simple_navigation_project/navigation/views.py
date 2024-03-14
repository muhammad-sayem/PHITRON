from django.shortcuts import render

# Create your views here.

def about(request):
    return render(request,'navigation/about.html')      # templates er vitorer folder er sathe eikhaner path lekhar somporko

def contact(request):
    return render(request,'navigation/contact.html')