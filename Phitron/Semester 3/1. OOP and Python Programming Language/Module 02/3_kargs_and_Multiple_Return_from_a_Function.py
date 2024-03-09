#####               kargs - Arguments with keys             #####

"""
def full_name(first, second):

    name = f"{first} {second}"
    # name = first + " " + second

    return name

name = full_name("Muhammad", "Sayem")
print("Full name is:",name)                 # Full name is: Muhammad Sayem

"""

# ------------------------------------------------------ #

"""
def full_name(first, second):

    name = f"{first} {second}"
    # name = first + " " + second

    return name

name = full_name(second = "Sayem", first = "Muhammad")
print("Full name is:",name)                 # Full name is: Muhammad Sayem

"""

# -------------------------------------------------------- #

"""
def person_details(firstName, lastName, **otherInfo):
    name = f"{firstName} {lastName}"
    print(otherInfo)                    # {'university': 'BUBT', 'department': 'CSE'}
    print(otherInfo['university'])      # BUBT
    print(otherInfo['department'])      # CSE

    for key, value in otherInfo.items():
        print(key, "---->", value)

    return name

text = person_details(firstName = "Muhammad", lastName = "sayem", university = "BUBT", department = "CSE")
print(text)

"""

# -------------------------------------------------------------- #

#####               Return multiple things from a function              #####

# def basic_calculator(x, y):
#     sum = x + y
#     sub = x - y
#     mult = x * y
#     div = x / y

#     return sum, sub, mult, div
#     # return [sum, sub, mult, div]

# result = basic_calculator(66, 3)
# print(result)                       # (69, 63, 198, 22.0)


def student_details(name, **kwargs):

    print(name)
    print(kwargs['address'])
    print(kwargs['dept'])

student_details(name = "Muhammad Sayem", address = "Dhaka", dept = "CSE")

