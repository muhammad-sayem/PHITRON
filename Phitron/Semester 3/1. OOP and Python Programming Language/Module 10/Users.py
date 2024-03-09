from abc import ABC, abstractmethod

class User(ABC):
    def __init__(self, name, phone, email, address):
        self.name = name
        self.phone = phone
        self.email = email
        self.address = address


class Customer(User):
    def __init__(self, name, phone, email, address, available_money):
        self.available_money = available_money
        self.__order = None
        self.due_amount = 0
        super().__init__(name, phone, email, address)

    @property        # Getter
    def order(self):
        return self.__order
    
    @order.setter
    def order(self, order):
        self.__order = order

    def place_order(self, order):
        self.order = order              # getter setter er __order er sathe eitar kono somporko nai
        self.due += order.bill
        print(f"{self.name} placed an order with {order.bill} taka")

    def eat_food(self, order):
        print(f"{self.name} eating food {order.items}")

    def pay_for_order(self, amount):
        pass

    def give_tips(self, tips_amount):
        pass

    def write_review(self, stars):
        pass


class Employee(User):
    def __init__(self, name, phone, email, address, salary, starting_date, department):
        self.salary = salary
        self.sdue = salary
        self.starting_date = starting_date
        self.department = department
        super().__init__(name, phone, email, address)

    def recieve_salary(self):
        self.due = 0


class Chef(Employee):
    def __init__(self, name, phone, email, address, salary, starting_date, department, cooking_item):
        self.cooking_item = cooking_item
        super().__init__(name, phone, email, address, salary, starting_date, department)


class Server(Employee):
    def __init__(self, name, phone, email, address, salary, starting_date, department):
        self.tips_earning = 0
        super().__init__(name, phone, email, address, salary, starting_date, department)

    def take_order(self, order):
        pass

    def transfer_order(self, order):
        pass

    def serve_food(self, order):
        pass

    def recieve_tips(self, amount):
        self.tips_earning += amount

class Manager(Employee):
    def __init__(self, name, phone, email, address, salary, starting_date, department):
        super().__init__(name, phone, email, address, salary, starting_date, department)
