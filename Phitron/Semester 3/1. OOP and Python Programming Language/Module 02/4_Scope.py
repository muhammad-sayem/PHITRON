"""
balance = 3000

def buy_things(item, price):
    balance = 5000
    balance -= price
    print("Money remaining:", balance)

buy_things("Glass", 1000)

"""

"""
You can access global variable without using 'global' keyword but
if you want to modify the global variable then you have to use 'global' keyword

"""

balance = 3000

def buy_things(item, price):
    global balance              # we used 'global' keyword to modigy the balance (global variable)

    print("Balance before buy:", balance)
    balance -= price

    print("Balance after buy:", balance)

buy_things("Shirt", 1000)