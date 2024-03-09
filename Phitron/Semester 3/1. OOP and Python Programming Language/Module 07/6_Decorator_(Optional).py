def timer():
    def inner():
        print("Timer Started")
        
        print("Timer Ended")
    return inner

# timer()()

def get_factorial():
    print("Factrial Starting")

get_factorial()

