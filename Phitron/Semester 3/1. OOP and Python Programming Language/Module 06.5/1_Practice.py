class Product:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

class Shop:

    def __init__(self):
        self.products = []

    def add_product(self, name):
        self.products.append(name)

    def buy_product(self, product_name, givenAmount):

        flag = False
        for product in self.products:
            if product.name == product_name:
                if product.price > givenAmount:
                    flag = True
                    print(f"Sorry, this is not enough. We need {product.price - givenAmount} taka more")
                elif product.price < givenAmount:
                    flag = True
                    print(f"Thanks for shopping. Here is your extra {givenAmount - product.price}")
                else:
                    flag = True
                    print(f"Thanks for Shopping")

        if flag is False:
            print(f"Sorry, {product_name} is not available right now")

product1 = Product("Laptop", 85000, 1)
product2 = Product("Phone", 30000, 2)
product3 = Product("Watch", 3500, 5)
product4 = Product("Claculator", 1500, 10)

anik = Shop()
anik.add_product(product1)
anik.add_product(product2)
anik.add_product(product3)
anik.add_product(product4)

anik.buy_product("Laptop", 90000)
anik.buy_product("Phone", 20000)
anik.buy_product("Keyboard", 20000)
anik.buy_product("Watch", 3500)


rashed = Shop()
rashed.add_product(product2)
rashed.add_product(product4)

rashed.buy_product("Laptop", 80000)
rashed.buy_product("watch", 3560)

# for item in rashed.products:
#     print(item.name)
#     print(item.price)


# for item in anik.products:
#     print("Item Name:", item.name, "\nPrice:", item.price, "\nQuantity:", item.quantity)
