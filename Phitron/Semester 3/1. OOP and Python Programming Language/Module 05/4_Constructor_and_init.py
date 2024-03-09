# C++ e je constructor eikhane init same kaj kore

class Phone:
    manufacturer = "China"

    def __init__(self, owner, brand, price):
        
        self.owner = owner
        self.brand = brand
        self.price = price

    def send_sms(self, phone, sms):
        text = f"Sending SMS to: {phone}, and the message is: {sms}"
        print(text)


my_phone = Phone("Sayem", "Realme", 20000)
# print("Owner:", my_phone.owner,"\nBrand:", my_phone.brand,"\nPrice:", my_phone.price)

his_phone = Phone("Anik", "Samsung", 30000)
# print("Owner:", his_phone.owner,"\nBrand:", his_phone.brand,"\nPrice:", his_phone.price)

# my_phone.send_sms("Anik Phone", "Give me some money")

father_phone = Phone("Father", "Nokia", 5000)
print("Owner:", father_phone.owner,"\nBrand:", father_phone.brand,"\nPrice:", father_phone.price)

