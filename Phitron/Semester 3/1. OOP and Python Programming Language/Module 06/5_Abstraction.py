# Abstraction holo vitorer details user er theke hide kora 
# Abstraction holo emon method create kora jegulo tar shob child class e must thaktei hobe 

# abc -----> Abstract Based Class

from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod     # Shob child class ei jeno ei method thake sheta force kora
    def eat(self):
        print("Need Food")
    
    @abstractmethod     # Shob child class ei jeno ei method thake sheta force kora
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self) -> None:
        super().__init__()

    def eat(self):
        print("Eat Banana")

    def move(self, tree_name):
        print(f"Hanging on the {tree_name} tree")

    def age(self, age):
        print(f"Age: {age}")

class Cow(Animal):
    def eat(self):
        print("Eat Grass")

    def move(self):
        print("running in the field")

    def color(self, clr):
        return f"The cow is {clr} colored"

lyka = Monkey()
lyka.eat()
lyka.move("Mango")
lyka.age(3)


myka = Cow()
print(myka.color("Black"))
myka.eat()
