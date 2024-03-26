from django.db import models

# Create your models here.

from django.db import models

# Create your models here.

class StudentModel(models.Model):
    roll = models.AutoField(primary_key  = True)
    name = models.CharField(max_length = 20)
    email = models.EmailField()
    address = models.TextField(null = True, blank = True)
    amount = models.IntegerField()
    binary_field = models.BinaryField(max_length = 5)
    date_field = models.DateField()
    date_time_field = models.DateTimeField()

    def __str__(self):
        return f"Name: {self.name} - {self.roll}"
