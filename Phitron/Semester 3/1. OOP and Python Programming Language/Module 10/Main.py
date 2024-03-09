from Menu import *
from Restaurant import *
from Users import *
from Order import *

def main():
    # Creating Menu
    menu = Menu()

    # Add Pizzas to the menu
    pizza_1 = Pizza("Chicken Pizza", 600, "Large", ["Cheese", "Corn"])
    menu.add_menu_item("pizza", pizza_1)
    pizza_2 = Pizza("Mashroom Pizza", 700, "Medium", ["Cheese", "Corn"])
    menu.add_menu_item("pizza", pizza_2)
    pizza_3 = Pizza("Vegetable Pizza", 500, "large", ["Cheese", "Corn"])
    menu.add_menu_item("pizza", pizza_3)

    # Add Burgers to the menu
    burger_1 = Burger("Chicken Cheese Burger", 280, "Chicken", ["Bun", "Chiken", "Cheese", "Sauce"])
    menu.add_menu_item("burger", burger_1)
    burger_2 = Burger("Beef Cheese Burger", 300, "Beef", ["Bun", "Beef", "Cheese", "Sauce"])
    menu.add_menu_item("burger", burger_2)
    burger_3 = Burger("Beef Naga Burger", 320, "Beef", ["Bun", "Beef", "Cheese", "Sauce", "Naga, Chili"])
    menu.add_menu_item("burger", burger_3)

    # Add Drinks to the menu
    mojo = Drinks("Mojo", 20, True)
    menu.add_menu_item('drinks', mojo)
    coffee = Drinks("Capuchino", 180, False)
    menu.add_menu_item('drinks', coffee)

    # Show Menu
    menu.show_menu()

    # ---------------------------------------------- #

    # Creating Restaurant
    restaurant = Restaurant("3 Food", 500, menu)

    # Adding Employees 
    manager = Manager("Sakib Ahmed", "01732628398", "sakibahmed@gmail.com", "Dhaka", 20000, "1 January, 2022", "Managing")
    restaurant.add_employee("manager", manager)

    chef = Chef("Rasel Hasan", "01927327294", "rasel@gmail.com", "Sylhet", 15000, "1 January, 2023", "Cooking", ["Burgers", "Pizzas", "Drinks"])
    restaurant.add_employee('chef', chef)

    server = Server("Shafin Islam", "01723469801", "shafin@gmail.com", "Comilla", 10000, "1 January 2022", "Serving Food")
    restaurant.add_employee('server', server)

    # Show Employees 
    restaurant.show_employees()

    # ------------------------------------------------ #

    # Customer 1 Placing an Order
    customer_1 = Customer("Anik Hasan", "014515626217", "anikhasan@gmail.com", "Rajshahi", 1000)
    order_1 = Order(customer_1, [pizza_3, coffee])
    customer_1.pay_for_order(order_1)
    restaurant.add_order(order_1)

    # Customer_1 Paying fo order_1
    restaurant.recieve_payment(order_1, 1000, customer_1)
    print(f"Revenue: {restaurant.revenue} and Balance: {restaurant.balance} after first customer")


    # Customer  Placing an Order
    customer_2 = Customer("Anik Hasan", "014515626217", "anikhasan@gmail.com", "Rajshahi", 1000)
    order_2 = Order(customer_2, [pizza_1, burger_1, mojo])
    customer_2.pay_for_order(order_2)
    restaurant.add_order(order_2)

    # Customer_2 Paying fo order_1
    restaurant.recieve_payment(order_2, 1000, customer_2)
    print(f"Revenue: {restaurant.revenue} and Balance: {restaurant.balance} after second customer")

    # -------------------------------------------------- #

    # Pay Rent
    restaurant.pay_expense(restaurant.rent, "Rent")
    print(f"After Rent {restaurant.expense}, Revenue: {restaurant.revenue}, Balance: {restaurant.balance}")

    # Pay Salary
    restaurant.pay_salary(chef)
    print(f"After salary {restaurant.expense}, Revenue: {restaurant.revenue}, Balance: {restaurant.balance}")


# Start the main
if __name__ == '__main__':
    main()