from django.shortcuts import render, redirect
from django.views.generic import DetailView
from .models import Car
from .forms import CommentForm
from django.shortcuts import get_object_or_404, redirect
from django.contrib.auth.decorators import login_required

class CarDetails(DetailView):
    model = Car
    pk_url_kwarg = 'id'
    template_name = 'car_details.html'

    def post(self, request, *args, **kwargs):
        comment_form = CommentForm(data=self.request.POST)
        car = self.get_object()
        if comment_form.is_valid():
            new_comment = comment_form.save(commit=False)
            new_comment.car = car
            new_comment.save()
        return self.get(request, *args, **kwargs)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        car = self.object # post model er object ekhane store korlam
        comments = car.comments.all()
        comment_form = CommentForm()
        
        context['comments'] = comments
        context['comment_form'] = comment_form
        return context
    

def not_available(request):
    return render(request, 'not_available.html')
    

def buy_now(request, id):
    car = get_object_or_404(Car, id=id)
    print("Initial quantity:", car.quantity)  # Debug statement
    if car.quantity >= 0:
        car.quantity -= 1
        car.save()
        request.session['purchased_car'] = car.id
        print("Updated quantity:", car.quantity)  
        return redirect('profile')

    else:
        return render(request, 'not_availabe.html')