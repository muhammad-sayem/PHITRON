from django.db import models

# Create your models here.

class StudentModel(models.Model):
    roll = models.AutoField(primary_key = True)
    name = models.CharField(max_length = 200)
    email = models.EmailField()
    address = models.TextField()
    boolean_field = models.BooleanField()
    date_field = models.DateField()
    date_time_field = models.DateTimeField()
    binary_field = models.BinaryField()
    father_name = models.TextField(blank = True, null = True)

    def __str__(self):
        return f"Roll: {self.roll} - {self.name}"
