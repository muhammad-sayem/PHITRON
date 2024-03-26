from django.db import models
from categories.models import Category
from author.models import Author

# Create your models here.

class Post(models.Model):
    title = models.CharField(max_length = 100)
    content = models.TextField()
    category = models.ManyToManyField(Category)     # Ekta post multiple categpry er moddhe thakte pare. Abar ekta category er moddhe multiple psots thake pare. (Many to many relation)
    author = models.ForeignKey(Author, on_delete = models.CASCADE)     # on_delete = models.CASECADE means author delete hoye gele tar shob posts o dlete hoye jabe 

    def __str__(self):
        return f"{self.title}"