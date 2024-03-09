# Attribute holo class er vitore declare kora variable / array (list)
# Method holo class er vitore function
# Method use korle ekta parameter (self) extra must use korte hoy
# Kono parameter na thakleo shudhu (self) use korte hoy

def call():
    print("This is from outer call function")
    return "Call Done"

class Phone:
    price = 18000
    brand = "Samsung"
    color = "Blue"
    features = ["Camera", "Light", "Speaker"]

    def calling(self):
        print("This is from phone class calling")
    
    def send_sms(self, phone, sms):
        text = f"Sending SMS to: {phone}, and the message is: {sms}"
        return text

my_phone = Phone()

# print(Phone.brand)
# print(Phone.features)

# recieve = call()
# print(recieve)

# my_phone.calling()

sms = my_phone.send_sms("Iphone", "Give me some money")
print(sms)

