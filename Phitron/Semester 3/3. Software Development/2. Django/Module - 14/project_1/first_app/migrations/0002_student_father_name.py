# Generated by Django 5.0.3 on 2024-03-23 06:32

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('first_app', '0001_initial'),
    ]

    operations = [
        migrations.AddField(
            model_name='student',
            name='father_name',
            field=models.TextField(default='Rasel Ahmed'),
        ),
    ]
