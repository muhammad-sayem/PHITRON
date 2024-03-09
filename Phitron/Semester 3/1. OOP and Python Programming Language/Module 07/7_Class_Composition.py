# Inheratance gives us "is a" relation (Ex: Chair "is a" furniture)
# Composition gives us "has a" relation (Ex: Car "has a" stairing)

####                Composition             ####

# ------------------------------------------------------------------- #
        
class CPU:
    def __init__(self, cores):
        self.cores = cores

class RAM:
    def __init__(self, ramSize) -> None:
        self.ramSize = ramSize

class HardDrive:
    def __init__(self, hdCapacity):
        self.capacity = hdCapacity

# Computer has a CPU, a RAM, a HardDrive
class Computer:
    def __init__(self, cores, ramSize, hdCapacity):
        self.cpu = CPU(cores)
        self.ram = RAM(ramSize)
        self.hardDrive = HardDrive(hdCapacity)

my_pc = Computer(12, "8GB", "512GB")
print("Cores:", my_pc.cpu.cores, "\nRam:", my_pc.ram.ramSize, "\nHard Drive:", my_pc.hardDrive.capacity)


# -------------------------------------------------------------- #

class Engine:
    def __init__(self, name, price) -> None:
        self.name = name
        self.price = price

    def start(self):
        print("Engine Started")

class Driver:
    def __init__(self) -> None:
        pass

class Car:
    def __init__(self):
        self.engine = Engine()             # Car has "has a" engine
        self.driver = Driver()            # Car "has a" driver

    def start(self):
        self.engine.start()

# --------------------------------------------------------------------- #

####            Inheritance             ####

# class Animal:
#     def __init__(self, name, favFood, legs):
#         self.name = name        
#         self.favFood = favFood        
#         self.legs = legs

# class Dog(Animal):

#     def __init__(self, name, favFood, legs, color):
#         self.color = color
#         super().__init__(name, favFood, legs)

#     def doing(self):
#         print("Eating meat") 


# lyka = Dog("Lyka Lyka", "Meat", 4, "Brown")
# lyka.doing()
# print(lyka.name)
# print(lyka.favFood)
# print(lyka.color)
