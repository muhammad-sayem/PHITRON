#####               Class Attribute                 #####
"""
class Shop:
    cart = []           # Class Attribute (joto gulo object thakbe shobar moddhe shared thakbe)

    def __init__(self, buyer):
        self.buyer = buyer
    
    def add_to_cart(self, item):
        self.cart.append(item)

robin = Shop("Robin Ahmed")
robin.add_to_cart("Shirt")
robin.add_to_cart("Pant")

print(robin.cart)

anik = Shop("Anik Islam")
anik.add_to_cart("Cap")
anik.add_to_cart("Watch")

print(anik.cart)

"""

# ----------------------------------------------------------------- #

#####               Instance Attribute                 #####

class Shop:

    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = []          # Instance Attribute (Shobar moddhe shared na, prottek object er jonno alada alada cart thake)

    def add_to_cart(self, item):
        self.cart.append(item)

rajib = Shop("Rajib Ahmed")
rajib.add_to_cart("Shirt")
rajib.add_to_cart("Pant")
print(rajib.cart)

fahim = Shop("Fahim Ahmed")
fahim.add_to_cart("Watch")
fahim.add_to_cart("Cap")
print(fahim.cart)

arif = Shop("Arif Ahmed")
arif.add_to_cart("Shoes")
arif.add_to_cart("Socks")
print(arif.cart)