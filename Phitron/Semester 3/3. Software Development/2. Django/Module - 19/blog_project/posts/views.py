from django.shortcuts import render, redirect
from .forms import PostForm, CommentForm
from .models import Post
from django.contrib.auth.decorators import login_required
from django.views.generic import CreateView, UpdateView, DeleteView, DetailView
from django.urls import reverse_lazy
from django.utils.decorators import method_decorator


# Create your views here.

@login_required
def add_post(request):
    if request.method == 'POST':
        post_form = PostForm(request.POST)
        if post_form.is_valid():
            post_form.instance.author = request.user
            post_form.save()
            return redirect('add_post')
    else:
        post_form = PostForm()
    return render(request, 'add_post.html', {'form': post_form})

# add_post using class based view
@method_decorator(login_required, name = 'dispatch')        # logged in user chara keu ekhane ashte parbe na (@login_required er moto kaaj kore class based views er jonno)
class AddPostCreateView(CreateView):
    model = Post
    form_class = PostForm
    template_name = 'add_post.html'     # je page e render kore shei url
    success_url = reverse_lazy('add_post')        # redirect jekhane kore shei url name

    def form_valid(self, form):
        form.instance.author = self.request.user
        return super().form_valid(form)

# ----------------------------------------------------------------- #

@login_required
def edit_post(request, id):
    post = Post.objects.get(pk = id)
    post_form = PostForm(instance = post)
    # print(post.title)
    if request.method == 'POST':
        post_form = PostForm(request.POST, instance=post)
        if post_form.is_valid():
            post_form.instance.author = request.user
            post_form.save()
            return redirect('homepage')

    return render(request, 'add_post.html', {'form': post_form})

# edit_post using class based view
@method_decorator(login_required, name = 'dispatch')
class EditPostView(UpdateView):
    model = Post
    form_class = PostForm
    template_name = 'add_post.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('profile')

# ----------------------------------------------------------------- #

@login_required
def delete_post(request, id):
    post = Post.objects.get(pk = id)
    post.delete()
    return redirect('homepage')

# delete_post using class based view
@method_decorator(login_required, name = 'dispatch')
class DeletePostView(DeleteView):
    model = Post
    template_name = 'delete.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('profile')

# ----------------------------------------------------------------- #

class DetailPostView(DetailView):
    model = Post
    pk_url_kwarg = 'id'
    template_name = 'post_details.html'
    
    def post(self, request, *args, **kwargs):
        comment_form = CommentForm(data=self.request.POST)
        post = self.get_object()
        if comment_form.is_valid():
            new_comment = comment_form.save(commit=False)
            new_comment.post = post
            new_comment.save()
        return self.get(request, *args, **kwargs)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        post = self.object # post model er object ekhane store korlam
        comments = post.comments.all()
        comment_form = CommentForm()
        
        context['comments'] = comments
        context['comment_form'] = comment_form
        return context
