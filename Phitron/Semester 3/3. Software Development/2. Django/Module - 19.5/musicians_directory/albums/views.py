from django.shortcuts import render, redirect
from .forms import AlbumForm
from django.views.generic import CreateView
from django.urls import reverse_lazy
from .models import Album
from django.views.generic import UpdateView, DeleteView

# Create your views here.

class AddAlbum(CreateView):
    template_name = 'add_album.html'
    form_class = AlbumForm
    success_url = reverse_lazy('homepage')


class EditAlbum(UpdateView):
    model = Album
    template_name = 'add_album.html'
    form_class = AlbumForm
    success_url = reverse_lazy('homepage')
    pk_url_kwarg = 'id'


def delete_album(request, id):
    album = Album.objects.get(pk = id)
    album.delete()
    return redirect('homepage')
