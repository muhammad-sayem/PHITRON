from django.db import models
from categories.models import Category

# Create your models here.

class Task(models.Model):
    task_title = models.CharField(max_length = 200)
    task_description = models.TextField()
    task_date = models.DateField()
    category = models.ManyToManyField(Category)
    is_completed = models.BooleanField(default = False)

    def __str__(self):
        return self.task_title