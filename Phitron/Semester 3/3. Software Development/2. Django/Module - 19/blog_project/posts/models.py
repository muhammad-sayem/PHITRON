from django.db import models
from categories.models import Category
from django.contrib.auth.models import User

# Create your models here.

class Post(models.Model):
    title = models.CharField(max_length = 100)
    content = models.TextField()
    category = models.ManyToManyField(Category)     # Ekta post multiple category er moddhe thakte pare. Abar ekta category er moddhe multiple psots thake pare. (Many to many relation)
    author = models.ForeignKey(User, on_delete = models.CASCADE)     # on_delete = models.CASECADE means author delete hoye gele tar shob posts o dlete hoye jabe 
    image = models.ImageField(upload_to ='posts/media/uploads/',blank = True, null = True)
    def __str__(self):
        return f"{self.title}"
    
class Comment(models.Model):
    post = models.ForeignKey(Post, on_delete=models.CASCADE, related_name='comments')
    name = models.CharField(max_length=30)
    email = models.EmailField()
    body = models.TextField(null = True, blank = True)
    created_on = models.DateTimeField(auto_now_add=True) # jkhn e ei class er object toiri hobe sei time ta rekhe dibe
    
    def __str__(self):
        return f"Comments by {self.name}"
    
    
