from math import *

class Shape:
    def __init__(self, name):
        self.name = name

class Rectangle(Shape):
    def __init__(self, name, length, width):
        self.length = length
        self.width = width
        super().__init__(name)

    def area(self):
        return self.length * self.width
    
class Circle(Shape):
    def __init__(self, name, radius):
        self.radius = radius
        super().__init__(name)

    def area(self):
        return pi*self.radius*self.radius
    
class Square(Shape):
    def __init__(self, name, length):
        self.length = length
        super().__init__(name)

    def area(self):
        return self.length*self.length
    
class Triangle(Shape):
    def __init__(self, name, base, height):
        self.base = base
        self.height = height
        super().__init__(name)

    def area(self):
        return 0.5*self.base*self.height
    

r1 = Rectangle("Rec1", 5, 3)
print(r1.area())

c1 = Circle("Cir1", 5)
print(c1.area())
print(c1.name)

s1 = Square("Sq1", 6)
print(s1.area())
print(s1.length)

t1 = Triangle("Tri1", 5, 3)
print(t1.area())
print(t1.height)
