from django.db import models
from django.contrib.auth.models import User
# Create your models here.

class Album(models.Model):
    album_name = models.CharField(max_length = 100)
    album_musician = models.ForeignKey(User, on_delete = models.CASCADE)
    release_date = models.DateField()
    RATINGS = [('1', '1'), ('2', '2'), ('3', '3'), ('4', '4'), ('5', '5')]
    rating = models.CharField(max_length = 5, choices = RATINGS)

    def __str__(self):
        return f"{self.album_name} - {self.album_musician}"