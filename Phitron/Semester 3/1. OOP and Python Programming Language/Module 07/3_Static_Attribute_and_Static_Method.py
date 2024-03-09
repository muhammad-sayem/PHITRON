class Shopping:

    cart = []           # Class Attribute (Shobar moddhe common)

    def __init__(self, name, location):
        self.name = name                # Instance Attribute
        self.location = location

    def purchase(self, item, price, givenAmount):
        remaining = givenAmount - price

        print(f"Product: {item}, Price: {price}, Remaining: {remaining}")

    @classmethod                # eita use korar karone direct class er name diye access kora jay
    def hudai_dekhi(self, item):
        print("Eita kinte ashi nai, khali dekhte ashchi", item)

    @staticmethod               # eita use korar karone direct class er name diye access kora jay
    def multiply(a, b):
        print("Multiplication result:", a*b)


shop1 = Shopping("Bashundhara", "Panthopoth")
# shop1.purchase("Laptop", 50000, 55000)
# shop1.hudai_dekhi("Gamcha")
Shopping.hudai_dekhi("Gamcha")            # eivabe korar jonno je method/function e emon korte chai, shei method er upore '@classmethod' use korte hoy 
Shopping.multiply(4, 5)

# Shopping.purchase("Laptop", 90000, 5, 80)         # evabe class theke direct access korte gele self er parameter o chay, deya lage
    