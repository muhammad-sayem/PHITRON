class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 10000

    def get_balance(self):
        return self.balance
    
    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            print(f"Your balance after deposit {self.balance} taka")

    def withdraw(self, amount):
        if amount < self.min_withdraw:
            print(f"You can't withdraw less than {self.min_withdraw} taka")
        elif amount > self.max_withdraw:
            print(f"You can't withdraw more than {self.max_withdraw} taka")
        else:
            self.balance -= amount

            print(f"You withdrawed {amount} taka")
            print(f"Your balance after withdraw {self.balance} taka")
            # print(f"Your balance after withdraw {self.get_balance()} taka")

brac = Bank(15000)
brac.withdraw(20)
brac.withdraw(20000)
brac.withdraw(9000)
brac.deposit(5000)