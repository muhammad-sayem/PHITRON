class Animal:
    def __init__(self, name):
        self.name = name
    
    def make_sound(self):
        print("Animal making some sound")


class Cat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print("Meow Meow")


class Dog(Animal):
    def make_sound(self):
        print("Ghew Ghew")


class Goat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print("Bha Bha Bha")


mini = Cat("Mini")
mini.make_sound()           # Output: Meow Meow

doggo = Dog("Doogo")
doggo.make_sound()          # Output: Ghew Ghew

sini = Goat("Sini")
sini.make_sound()

mini2 = Cat("Mini Mini")
mini2.make_sound()


# animals = [mini, doggo, sini, mini2]

# for animal in animals:
#     animal.make_sound

