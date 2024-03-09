class Pen:

    def __init__(self, name, price):

        self.name = name
        self.price = price

pen1 = Pen("Matador", 5)
pen2 = Pen("Econo", 15)
pen3 = Pen("Fresh", 10)

print("Pen name:", pen1.name, "\nPen price:", pen1.price)
print("Pen name:", pen2.name, "\nPen price:", pen2.price)
print("Pen name:", pen3.name, "\nPen price:", pen3.price)