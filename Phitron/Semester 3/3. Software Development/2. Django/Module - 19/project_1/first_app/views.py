from django.shortcuts import render
from datetime import datetime, timedelta
from django.http import HttpResponse
# Create your views here.

def home(request):
    response = render(request, 'home.html')     # Je page e render korte chai shei page er name
    response.set_cookie('name', 'Shihab')
    # response.set_cookie('name', 'Fahim', max_age=10)
    response.set_cookie('name', 'Fahim', expires =datetime.utcnow()+timedelta(days=7))
    return response

def get_cookies(request):
    name = request.COOKIES.get('name')
    print(request.COOKIES)
    return render(request, 'get_cookie.html', {'name': name})

def delete_cookies(request):
    response = render(request, 'del.html')
    response.delete_cookie('name')
    return response


# Sessions 

def set_sessions(request):
    # data = {
    #     'name' : 'Tanvir',
    #     'age' : 25,
    #     'language': 'Bangla',
    # }
    # print(request.session.get_session_cookie_age())
    # print(request.session.get_expiry_date())

    # request.session.update(data)
    request.session['name'] = 'Fahim'
    return render(request, 'home.html')


def get_sessions(request):
    if 'name' in request.session:
        name = request.session.get('name', 'Guest')
        request.session.modified = True
        return render(request, 'get_session.html', {'name': name})
    else:
        return HttpResponse("Your session has been expired. Login again")


def delete_sessions(request):
    # del request.session['name']       #Specific kichu dleete korte chaile
    request.session.flush()
    request.session.clear_expired()
    return render(request, 'del.html')