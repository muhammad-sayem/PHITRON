from abc import ABC, abstractmethod

class Account(ABC):
    accounts = []

    def __init__(self, name, accNumber, password, type):
        self.name = name
        self.accNumber = accNumber
        self.password = password
        self.type = type
        self.balance = 0

        Account.accounts.append(self)       # accounts holo class attribute, self diye bujhacche je account ta create kora hoise shei tai list er moddhe append kore deya hoise

    def deposit(self, amount):
        if amount >= 0:
            self.balance += amount
        else:
            print("\nInvalid amount\n")

    def withdraw(self, amount):
        if amount >= 0 and amount <= self.balance:
            self.balance -= amount
        else:
            print("\nInvalid amount\n")

    def changeInfo(self, name):
        self.name = name

    # Overloading of changeInfo method
    def changeInfo(self, name, password):
        self.name = name
        self.password = password

    @abstractmethod
    def showInfo(self):
        pass


class SavingsAccount(Account):
    def __init__(self, name, accNumber, password, interest_rate):
        self.interest_rate = interest_rate
        super().__init__(name, accNumber, password, "savings")      # Jehetu amra jani eta savings account tai fixed kore "savings" kore deya hoise

    def showInfo(self):
        print(f"\nInfos of account {self.name}\n")
        print(f"\nAccount number: {self.accNumber}\n")
        print(f"\nAccount type: {self.type}\n")
        print(f"\nBalance: {self.balance}\n")

    def applyInterest(self):
        interest = self.balance*(self.interest_rate/100)
        print(f"Applied interest of {interest}")
        self.deposit(interest)


class SpecialAccount(Account):
    def __init__(self, name, accNumber, password, limit):
        self.limit = limit
        super().__init__(name, accNumber, password, "special")

    def withdraw(self, amount):
        if amount >= 0 and amount <= self.limit:
            self.balance -= amount

    def showInfo(self):
        print(f"\nInfos of {self.type} account {self.name}")
        print(f"\nAccount number: {self.accNumber}")
        print(f"\nBalance: {self.balance}")


currentUser = None

while True:
    # When nobody logged in
    if currentUser == None:
        print("\nNo user logged in!!\n")
        ch = input("\nLogin or Registar? (L/R): ")

        # If user wants to Registar
        if ch == "R":
            name = input("Enter you name: ")
            account_number = input("Enter your account number: ")
            password = input("Enter password: ")

            choice = input("Savings or Special account? (sv/sp)")
            if choice == "sv":
                interest_rate = int(input("Enter interest Rate: "))
                currentUser = SavingsAccount(name, account_number, password, interest_rate)
            elif choice == "sp":
                limit = int(input("Enter Limit: "))
                currentUser = SpecialAccount(name, account_number, password, limit)
            else:
                print("\nInvalid account type given!!\n")

        # If user wants to login
        else:
            account_number = input("Enter account number: ")

            for account in Account.accounts:
                if account_number == account.accNumber:
                    currentUser = account
                    break

    # When someone logged in
    else:
        print(f"\nWealcome {currentUser.name}!\n")

        if currentUser.type == 'savings':
            print("1. Show Info")
            print("2. Deposit")
            print("3. Withdraw")
            print("4. Apply Ineterest")
            print("5. Change Info")
            print("6. Logout")

            option = int(input("Enter Option: "))

            if option == 1:
                currentUser.showInfo()

            elif option == 2:
                amount = int(input("Enter deposit amount: "))
                currentUser.deposit(amount)

            elif option == 3:
                amount = int(input("Enter withdraw amount: "))
                currentUser.withdraw(amount)

            elif option == 4:
                currentUser.applyInterest()

            elif option == 5:
                print("Homework")
            
            elif option == 6:
                currentUser = None

        else:
            print("1. Show Info")
            print("2. Deposit")
            print("3. Withdraw")
            print("4. Change Info")
            print("5. Logout")

            option = int(input("Enter Option: "))

            if option == 1:
                currentUser.showInfo()

            elif option == 2:
                amount = int(input("Enter deposit amount: "))
                currentUser.deposit(amount)

            elif option == 3:
                amount = int(input("Enter withdraw amount: "))
                currentUser.withdraw(amount)

            elif option == 4:
                print("Homework")
            
            elif option == 5:
                currentUser = None