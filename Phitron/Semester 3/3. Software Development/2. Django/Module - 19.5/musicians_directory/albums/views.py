from django.shortcuts import render, redirect
from django.views.generic import CreateView, UpdateView, DeleteView
from .models import Album
from .forms import AlbumForm
from django.urls import reverse_lazy

# Create your views here.

class add_album(CreateView):
    model = Album
    form_class = AlbumForm
    template_name = 'add_album.html'
    success_url = reverse_lazy('homepage')

class edit_album(UpdateView):
    model = Album
    form_class = AlbumForm
    template_name = 'add_album.html'
    success_url = reverse_lazy('homepage')
    pk_url_kwarg = 'id'

def delete_album(request, id):
    album = Album.objects.get(pk = id)
    album.delete()
    return redirect('homepage')

# class delete_album(DeleteView):
#     model = Album
#     success_url = reverse_lazy('homepage')
