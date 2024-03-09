from abc import ABC, abstractmethod

class Ride_Sharing:
    def __init__(self, company_name):
        self.company_name = company_name
        self.riders = []
        self.drivers = []

    def add_riders(self, rider):
        self.riders.append(rider)

    def add_drivers(self, driver):
        self.drivers.append(driver)

    def __repr__(self):
        return f"{self.company_name} has {len(self.riders)} riders and {len(self.divers)} drivers"
    

class User(ABC):                # Driver and rider er common properties
    def __init__(self, name, email, nid):
        self.name = name
        self.email = email
        self.nid = nid

    @abstractmethod
    def display_profile(self):
        raise NotImplementedError
    

class Driver(User):
    def __init__(self, name, email, nid, current_location):
        self.current_location = current_location
        super().__init__(name, email, nid)

    def display_profile(self):
        print(f"Driver name: {self.name}\nDriver Email: {self.email}")
        


class Rider(User):
    def __init__(self, name, email, nid, current_location):
        self.current_location = current_location
        self.current_ride = None
        super().__init__(name, email, nid)

    def display_profile(self):
        print(f"Rider name: {self.name}\nRider Email: {self.email}")

    def ride_request(self, uber, destination):          # Rider 'uner' er kase req korbe 'destination' e jaoar jonno
        print("Looking for a ride")
        if self.current_ride == None:
            ob = Ride_Matching(uber.drivers)             # uber er driver list ta pathano hobe 'Ride_Matching' class er kase available driver ase kina check korar jonno
            res = ob.has_driver(self, destination)            # 'self' er maddhome pura 'sakib' object tai jacche
            print("Your result is", res)
            self.current_ride = res
            return True
        else:
            return False


class Ride:
    def __init__(self, start_location, end_location):
        self.start_location = start_location
        self.end_location = end_location
        self.driver = None              
        self.rider = None

    def start_ride(self):
        pass

    def end_ride(self):
        pass

    def __repr__(self) -> str:
        return f"Starts from {self.start_location} to {self.end_location}"
    

class Ride_Matching:
    def __init__(self, drivers):            # drivers list ta ke pathano hocche
        self.drivers = drivers

    def has_driver(self, rider, destination):
        if len(self.drivers) > 0:
            ride = Ride(rider.current_location, destination)
            return ride
        else:
            return "Sorry driver not found"
        
        

uber = Ride_Sharing("UBER")             # Creating the company

alice = Driver("Alice", "alice@gmail.com", 123456, "Chittagong 1")   
sakib = Rider("Sakib", "sakib@gmail.com", 12345678, "Chittagong 2")

uber.add_drivers(alice)
uber.add_riders(sakib)

if sakib.ride_request(uber, "Dhaka"):
    print("Travelling.....")
else:
    print("No ride found")