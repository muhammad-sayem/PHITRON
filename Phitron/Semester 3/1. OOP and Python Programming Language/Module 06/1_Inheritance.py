# Inheritance means uttoradhikar (parent class, Base Class, Common attribute + functionality class. Maane je boishishto gula shob class er moddhe common)

class Gadget:               # Parent Class
    def __init__(self, brand, price, color, origin):
        self.brand = brand
        self.price = price
        self.color = color
        self.origin = origin

    def run(self):
        return f"Running Device: {self.brand}"

class Laptop(Gadget):
    def __init__(self, brand, price, color, origin, memory, ssd):
        self.memory = memory
        self.ssd = ssd
        super().__init__(brand, price, color, origin)
    
    def coding(self):
        return f"Learning Python"
    
    def __repr__(self) -> str:
        return f"This is {self.brand} laptop"
    

class Phone(Gadget):
    def __init__(self, brand, price, color, origin, dual_sim):
        self.dual_sim = dual_sim
        super().__init__(brand, price, color, origin)
    
    def phone_call(self, number, sms):
        return f"Calling to {number}, {sms}"
    
    def __repr__(self) -> str:
        return f"Existance of Dual Sim: {self.dual_sim}"
    
    
class Camera(Gadget):
    def __init__(self, brand, price, color, origin, pixel):
        self.pixel = pixel
        super().__init__(brand, price, color, origin)

    def change_lens(self):
        pass


my_phone = Phone("Samsung", 20000, "Blue", "China", "Yes")
print(my_phone.brand)
print(my_phone.phone_call(1234567, "Send me an email"))
print(my_phone)

my_laptop = Laptop("HP", 70000, "Blue", "USA", "Availabe", "512 GB")
print(my_laptop.brand)
print(my_laptop.coding())
print(my_laptop)



# ------------------------------------------------------------ #


"""
class Laptop:
    def __init__(self, brand, price, color, memory):
        self.brand = brand
        self.price = price
        self.color = color
        self.memory = memory

    def run(self):
        return f"Running Laptop: {self.brand}"
    
    def coding(self):
        return f"Learning Python"

class Phone:
    def __init__(self, brand, price, color, sim):
        self.brand = brand
        self.price = price
        self.color = color
        self.sim = sim

    def run(self):
        return f"Running Phone: {self.brand}"
    
    def browsing(self):
        return f"Browsing Youtube"
    
class Camera:
    def __init__(self, brand, price, color, pixel):
        self.brand = brand
        self.price = price
        self.color = color
        self.pixel = pixel
    
    def run(self):
        pass

    def change_lens(self):
        pass
        
"""