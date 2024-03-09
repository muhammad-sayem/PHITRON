class Food:
    def __init__(self, name, price):
        self.name = name
        self.price = price
        self.cooking_time = 15


class Burger(Food):
    def __init__(self, name, price, meat, ingrediants):
        self.meat = meat
        self.ingrediants = ingrediants
        super().__init__(name, price)

class Pizza(Food):
    def __init__(self, name, price, size, toppings):
        self.size = size
        self.toppings = toppings
        super().__init__(name, price)

class Drinks(Food):
    def __init__(self, name, price, isCold = True):
        self.isCold = isCold
        super().__init__(name, price)

# Composition
        
class Menu:
    def __init__(self):
        self.burgers = []
        self.pizzas = []
        self.drinks = []

    def add_menu_item(self, item_type, item):
        if item_type == 'burger':
            self.burgers.append(item)

        elif item_type == 'pizza':
            self.pizzas.append(item)

        elif item_type == 'drinks':
            self.drinks.append(item)

    def remove_pizza(self, pizza):
        if pizza in self.pizzas:
            self.pizzas.remove(pizza)

    def show_menu(self):
        print("\n-----------  Showing Menu  -----------")
        print("--------------------------------------------")
        for burger in self.burgers:
            print(f"Food Name: {burger.name}    Price: {burger.price}")
            
        for pizza in self.pizzas:
            print(f"Food Name: {pizza.name}    Price: {pizza.price}")
            
        for drink in self.drinks:
            print(f"Food Name: {drink.name}    Price: {drink.price}")
            