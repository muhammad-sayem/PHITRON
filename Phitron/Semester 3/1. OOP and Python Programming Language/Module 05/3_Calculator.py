class Calculator:
    brand = "Casio"

    def sum(self, x, y):
        return x + y

    def sub(self, x, y):
        return x - y

    def mult(self, x, y):
        return x * y

    def div(self, x, y):
        return x / y
    
myCalculator = Calculator()

summation = myCalculator.sum(10, 5)
print(summation)

subtraction = myCalculator.sub(10, 5)
print(subtraction)

multiplication = myCalculator.mult(10, 5)
print(multiplication)

division = myCalculator.div(10, 5)
print(division)