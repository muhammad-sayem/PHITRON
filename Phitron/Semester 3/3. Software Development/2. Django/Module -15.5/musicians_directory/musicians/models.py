from django.db import models

# Create your models here.

class Musician(models.Model):
    first_name = models.CharField(max_length = 100)
    last_name = models.CharField(max_length = 100)
    email = models.EmailField()
    phone_no = models.CharField(max_length = 11)
    instrument_type = models.CharField(max_length = 50)

    def __str__(self):
        return f"{self.first_name} {self.last_name}"