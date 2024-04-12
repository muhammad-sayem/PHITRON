from django.db import models
from musicians.models import Musician

# Create your models here.

class Album(models.Model):
    album_name = models.CharField(max_length = 100)
    album_musician = models.ForeignKey(Musician, on_delete = models.CASCADE)
    release_date = models.DateTimeField(auto_now_add = True)
    RATINGS = [("1", "1"), ("2", "2"), ("3", "3"), ("4", "4"), ("5", "5")]
    rating = models.CharField(max_length = 5, choices = RATINGS)

    def __str__(self):
        return f"{self.album_name} - {self.album_musician}"