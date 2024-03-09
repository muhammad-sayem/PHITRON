# Operator Overloading
# '+' sign ta overloading hocche

"""
print(89+56)
print("Shakib " + "Tamim")
print([3, 6, 7] + [9, 7, 4, 8])
"""

class Person:
    def __init__(self, name, age, height, weight):
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def eat(self):
        print("Burger, Pizza, Cake")

    # Overriding
    def exercise(self):
        NotImplementedError         # override kortei hobe
    

class Cricketer(Person):

    def __init__(self, name, age, height, weight, team):
        self.team = team
        super().__init__(name, age, height, weight)

    def eat(self):
        print("Vegetables")

    def exercise(self):
        print("Daily gym kore")

    def __add__(self, other):
        return self.age + other.age
    
    def __mul__(self, other):
        return self.height * other.height
    
    def __len__(self):
        return self.height
    
    def __gt__(self, other):
        return self.age > other.age
    
    def __lt__(self, other):
        return self.age < other.age

shakib = Cricketer("Shakib Al Hasan", 37, 68, 78, "BD")
# shakib.eat()
# shakib.exercise()

tamim = Cricketer("Tamim Iqbal", 36, 72, 82, "BD")
# tamim.eat()
# tamim.exercise()

print("Age:", shakib + tamim)
print("Height:", shakib * tamim)
print(len(shakib))
print(shakib > tamim)
print(shakib < tamim)



# print(shakib.name)