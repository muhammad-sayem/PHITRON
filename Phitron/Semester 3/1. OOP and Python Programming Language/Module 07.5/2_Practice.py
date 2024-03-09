# class Person:
#     def __init__(self, name, age, height, weight):
#         self.name = name
#         self.age = age
#         self.height = height
#         self.weight = weight

# class Cricketer(Person):
#     def __init__(self, name, age, height, weight):
#         super().__init__(name, age, height, weight)

#     def __gt__(self, other):
#         return self.age > other.age


# sakib = Cricketer("Shakib Al Hasan", 38, 68, 91)
# mushfique = Cricketer("Mushfiqur Rahim", 36, 68, 88)
# kamal = Cricketer("Kamal Hasan", 39, 68, 94)
# jack = Cricketer("Will Jacks", 38, 68, 91)
# hridoy = Cricketer("Tawhid Hridoy", 37, 68, 95)

# old_player = max([sakib, mushfique, kamal, jack, hridoy])
# print("The Oldest player is:", old_player.name)




class Shopping:

    cart = []           # Class Attribute (Shobar moddhe common)

    def __init__(self, name, location):
        self.name = name                # Instance Attribute
        self.location = location

    def purchase(self, item, price, givenAmount):
        remaining = givenAmount - price

        print(f"Product: {item}, Price: {price}, Remaining: {remaining}")

    @classmethod                # eita use korar karone direct class er name diye access kora jay
    def hudai_dekhi(self, item):
        print("Eita kinte ashi nai, khali dekhte ashchi", item)

    @staticmethod               # eita use korar karone direct class er name diye access kora jay
    def multiply(a, b):
        print("Multiplication result:", a*b)


shop1 = Shopping("Bashundhara", "Panthopoth")
# shop1.purchase("Laptop", 50000, 55000)
# shop1.hudai_dekhi("Gamcha")
Shopping.hudai_dekhi("Gamcha")            # eivabe korar jonno je method/function e emon korte chai, shei method er upore '@classmethod' use korte hoy 
Shopping.multiply(4, 5)

# Shopping.purchase("Laptop", 90000, 5, 80)         # evabe class theke direct access korte gele self er parameter o chay, deya lage
    