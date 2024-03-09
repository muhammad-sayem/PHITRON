# Singletone ---> One single instance
# If you want a new instance (object), you will get the old one (already created) instance

class Singleton:
    __instance = None

    def __init__(self):
        if Singleton.__instance is None:
            Singleton.__instance =  self
        else:
            raise Exception("This is singleton. Alradey has an instance")
            # print("This is singleton. Alradey has an instance")
        
    @staticmethod
    def get_instance():
        if Singleton.__instance is None:
            Singleton()
        return Singleton.__instance
    
    def show(self):
        print("This is inside show function")
    

first = Singleton()
first.show()
second = Singleton.get_instance()
print(first)
print(second)

last = Singleton()
