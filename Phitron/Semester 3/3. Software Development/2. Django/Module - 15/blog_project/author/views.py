from django.shortcuts import render, redirect
from .forms import AuthorForm

# Create your views here.

def add_author(request):
    if request.method == 'POST':        # User post request koreche 
        author_form = AuthorForm(request.POST)  # User er post request data ekhane capture korlam
        if author_form.is_valid():  # Form valid kina check korlam
            author_form.save()      # Jodi data valid hoy tahole database e save korbo
            return redirect('add_author')   # Shob thik thakle 'add_author' page e abar pathiye dilam
    else:
        author_form = AuthorForm()
    return render(request, 'add_author.html', {'form': author_form})