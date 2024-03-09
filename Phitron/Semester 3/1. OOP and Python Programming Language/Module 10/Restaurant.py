class Restaurant:
    def __init__(self, name, rent, menu = []):
        self.name = name
        self.rent = rent
        self.chef = None
        self.server = None
        self.manager = None
        self.menu = menu
        self.orders = []
        self.revenue = 0
        self.expense = 0
        self.balance = 0
        self.profit = 0

    def add_employee(self, employee_type, employee):
        if employee_type == 'chef':
            self.chef = employee

        elif employee_type == 'server':
            self.server = employee
        
        elif employee_type == 'manager':
            self.manager = employee

    def add_order(self, order):
        self.orders.append(order)

    def recieve_payment(self, order, amount, customer):
        if amount >= order.bill:
            self.revenue += order.bill
            self.balance += order.bill
            self.due_amount = 0
            return amount - order.bill
        else:
            print("Not Enough Money")
        
    def pay_expense(self, amount, description):
        if amount < self.balance:
            self.expense += amount
            self.balance -= amount
            print(f"Expense {amount} for {description}")
        else:
            print(f"Not enough money to pay {amount} taka")

    def pay_salary(self, employee):
        print(f"Paying salary for {employee.name}, amount {employee.salary}")
        if employee.salary < self.balance:
            self.balance += employee.salary
            self.expense -= employee.salary
            employee.recieve_salary()


    def show_employees(self):
        print("\n-----------  Showing Employees  -----------")
        print("--------------------------------------------")
        if self.chef is not None:
            print(f"Chef name: {self.chef.name}     Salary: {self.chef.salary}")

        if self.manager is not None:
            print(f"Chef name: {self.manager.name}     Salary: {self.manager.salary}")

        if self.server is not None:
            print(f"Chef name: {self.server.name}    Salary: {self.server.salary}")

 

        