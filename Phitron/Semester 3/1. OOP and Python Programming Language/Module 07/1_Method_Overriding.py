# Parent class er same name er kono method child class e thaklei method overriding hoy 

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

shakib = Cricketer("Shakib Al Hasan", 37, 68, 78, "BD")
shakib.eat()
shakib.exercise()
# print(shakib.name)