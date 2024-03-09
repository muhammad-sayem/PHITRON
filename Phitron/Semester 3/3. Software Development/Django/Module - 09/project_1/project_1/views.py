from django.http import HttpResponse

def home(request):
    return HttpResponse("This is HOME PAGE")

def contact(request):
    return HttpResponse("This is CONTACT PAGE")