def double_decker():
    print("This is Starting of double decker") 
    def inner_func():
        print("This is inner func")
        return 6000
    return inner_func

# print(double_decker())
# print(double_decker()())

def do_something(work):
    print("Work started")
    work()
    print("Work ended")

# do_something("Eating")
    
def coding():
    print("Coding in python")

# do_something(coding)
    
def sleeping():
    print("Sleeping and dreaming")

do_something(sleeping)