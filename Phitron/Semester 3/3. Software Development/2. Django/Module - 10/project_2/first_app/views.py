from django.shortcuts import render
import datetime
# Create your views here.

def home(request):

    d = {'author': 'Rashed', 'age': 20, 'birthday': datetime.datetime.now(), 'lst': ['python', 'is', 'joss'], 'courses': [
        {
            'id': 1,
            'name': 'python',
            'fee': 5000
        },

        {
            'id': 2,
            'name': 'django',
            'fee': 10000
        },

        {
            'id': 3,
            'name': 'C++',
            'fee': 2000
        },
    ]}

    return render (request, 'home.html', d)