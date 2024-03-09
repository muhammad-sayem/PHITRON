class Family:
    def __init__(self, address):
        self.adress = address

class School:
    def __init__(self, id, cls):
        self.id = id
        self.cls = cls

class Sports:
    def __init__(self, game_name):
        self.game_name = game_name

class Student(Family, School, Sports):
    def __init__(self, address, id, cls, game_name):
        Family.__init__(self, address)
        School.__init__(self, id, cls)
        Sports.__init__(self, game_name)

    def __repr__(self) -> str:
        return f"Address: {self.adress}, ID: {self.id}, Class: {self.cls}, Game: {self.game_name}"

rasel = Student("Dhaka", 123, 9, "Cricket")

print(rasel.adress)
print(rasel.game_name)
print(rasel)