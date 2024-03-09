# Encapsulation --> Hide Information
# Access Modifiers: Public, Private, Protected
# Pblic property shobai access kore change korte pare (by default public e thake)
# Private property only nij class er vitor theke access and change kora jay (attribute er name er age __ diye dile private hoye jay)

class Bank:
    def __init__(self, holderName, initialDeposit):
        self.holderName = holderName        # Public
        self._branch = "Mirpur 10"          # Protected (Jodio shob jayga theke e access kora jay but child e use kora prefer korle eita use kore)
        self.__balance = initialDeposit     # Private 

    def deposit(self, amount):
        self.__balance += amount

    def withdraw(self, amount):
        if amount <= self.__balance:
            self.__balance -= amount
            return self.__balance
        else:
            return "Not Possible"

    def getBalance(self):
        return self.__balance


hasib = Bank("Hasib Shanto", 20000)
print(hasib.holderName)
hasib.deposit(5000)
print(hasib.getBalance())

check = hasib.withdraw(10000)
print(hasib.getBalance())
    
# To access Private Attributes -------->

# print(dir(hasib))
# print(hasib._Bank__balance)
