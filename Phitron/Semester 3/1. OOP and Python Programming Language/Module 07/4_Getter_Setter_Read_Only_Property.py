# Read only ---> We can not set the value. Value can't be changed
# Getter ---> Get a value of a property through a method. Most of the time you will get the value of a private property 
# Setter ---> Set a value of a property through a method. Most of the time, you will set the value of a private property
# Getter without any setter is read only attribute

class User:

    def __init__(self, name, age, money):
        self._name = name
        self._age = age
        self.__money = money

    # getter
    @property           # eta use korle method ta attribute hishabe kaj kore baconvert hoye jay
    def age(self):
        return self._age
    
    # getter
    @property
    def salary(self):
        return self.__money
    
    # setter
    @salary.setter                      # Format: @getter_name.setter (setter korte gele getter must thakte hbe)
    def salary(self, amount):
        if amount < 0:
            print("Negative amount not valid")
        else:
            self.__money += amount

sayem = User("Muhammad Sayem", 23, 12000)
# print(sayem.money)          # Access kora jabe na karon money private property
# print(sayem.age())            # As a method call kora hoy evabe

# print(sayem.age)
# print(sayem.salary)

sayem.salary = 5000             # private property er value change kora jay 
print(sayem.salary)



