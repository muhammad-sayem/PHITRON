from django.db import models
from brands.models import Brand

# Create your models here.

class Car(models.Model):
    car_name = models.CharField(max_length = 100)
    price = models.CharField(max_length = 50)
    brand = models.ForeignKey(Brand, on_delete=models.CASCADE)
    quantity = models.IntegerField()
    image = models.ImageField(upload_to = 'cars/media/uploads')
    description = models.TextField(blank = True, null = True)

    def __str__(self):
        return self.car_name
    

class Comment(models.Model):
    car = models.ForeignKey(Car, on_delete = models.CASCADE, related_name = 'comments')
    name = models.CharField(max_length = 30)
    email = models.EmailField()
    body = models.TextField()
    created_on = models.DateTimeField(auto_now_add = True)

    def __str__(self):
        return f"Comments by: {self.name}"