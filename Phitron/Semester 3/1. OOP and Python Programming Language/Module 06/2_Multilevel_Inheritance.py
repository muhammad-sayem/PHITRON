class Vehicle:
    def __init__(self, name, price):
        self.name = name
        self.price = price
    
    def move(self):
        pass

    def __repr__(self) -> str:
        return f"The End"

class Bus(Vehicle):
    def __init__(self, name, price, seat):
        self.seat = seat
        super().__init__(name, price)
    
    def __repr__(self) -> str:
        return super().__repr__()

class Truck(Vehicle):
    def __init__(self, name, price, weight):
        self.weight = weight
        super().__init__(name, price)

class pickUpTruck(Truck):
    def __init__(self, name, price, weight):
        super().__init__(name, price, weight)

class ACBus(Bus):
    def __init__(self, name, price, seat, temparature):
        self.temparature = temparature
        super().__init__(name, price, seat)

    def __repr__(self) -> str:
        return super().__repr__()


greenline = ACBus("Green Line", 15000000, 52, "25 Degrees")

print(greenline.name)
print(greenline.price)
print(greenline.seat)
print(greenline)