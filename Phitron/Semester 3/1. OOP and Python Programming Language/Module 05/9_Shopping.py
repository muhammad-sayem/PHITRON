class Shopping:

    def __init__(self, name):
        self.name = name
        self.cart = []

    def add_to_cart(self, item, price, quantity):
        product = {"item": item, "price": price, "quantity": quantity}
        self.cart.append(product)

    def checkout(self, given_amount):
        total = 0

        for item in self.cart:
            total += item['price']*item['quantity']
        
        print("Total price:", total)

        if given_amount < total:
            print(f"The amount is not enought. We need {total - given_amount} taka more")
        elif given_amount > total:
            print(f"Thanks for Shopping. Here is your extra {given_amount - total} taka")
        else:
            print("Thanks for Shopping")


rifat = Shopping("Rifat Hossain")

rifat.add_to_cart("Oranges", 20, 12)
rifat.add_to_cart("Eggs", 10, 24)
rifat.add_to_cart("Watermelons", 300, 3)

# print(rifat.cart)

# for elements in rifat.cart:
#     print(elements)

rifat .checkout(1000)
rifat .checkout(1380)
rifat .checkout(1500)


    