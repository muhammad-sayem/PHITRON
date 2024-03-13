from django.shortcuts import render

# Create your views here.

def show(request):

    dic = {'name': 'Sayem', 'id': 187, 'lst': ['python', 'C++', 'javaScript'], 'books': [

        {
            'book_id': 1,
            'book_name': 'Harry Potter and the Prisoner of Azkaban',
            'author': 'JK Rowling'
        },

        {
            'book_id': 2,
            'book_name': 'Harry Potter and the Philosophers Stone',
            'author': 'JK Rowling'
        },

        {
            'book_id': 3,
            'book_name': 'The Old Man and the Sea',
            'author': 'Ernest Hemingway'
        },

    ]}

    return render(request, 'practice_app/show.html', dic)