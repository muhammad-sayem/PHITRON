# Generated by Django 5.0.3 on 2024-04-07 16:59

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('posts', '0005_comment'),
    ]

    operations = [
        migrations.AlterField(
            model_name='comment',
            name='body',
            field=models.TextField(blank=True, null=True),
        ),
    ]
