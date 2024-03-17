from django.shortcuts import render

myNotes = [{'id': 1, 'title': 'first note', 'entries': ['Entry 1.1', 'Entry 1.2,', 'Entry 1.3']},
           {'id': 2, 'title': 'second note', 'entries': ['Entry 2.1', 'Entry 2.2,', 'Entry 2.3']},
           {'id': 3, 'title': 'third note', 'entries': ['Entry 3.1', 'Entry 3.2,', 'Entry 3.3']},
           ]

def index(request):
    return render(request, 'notes/index.html')

def notes(request):
    notes = myNotes
    context = {'notes': notes}

    return render(request, 'notes/notes.html', context)

def note(request, note_id):
    
