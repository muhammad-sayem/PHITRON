"""
a = 5
if a > 5: 
    print("Greater than 5")
    print("5 er cheye boro")
elif a == 5:
    print("Equals to 5") 
else:
    print("Less or equal to 5")

"""
# ------------------------------------------------- #
"""
sleep = True

if sleep is True:
    print("He is Sleeping")
else:
    print("He is not sleeping")

"""
# ------------------------------------------------------ #
"""
num = 20

if num >= 40 and num%2 == 0:
    print("Passed and Even")
elif num >= 40 and num%2 != 0:
    print("Passed and Odd")
else:
    print("Failed")
"""
# ----------------------------------------------------------------- #

#####           Nested Conditions               #####

marks = 56

if marks >= 40:
    print("Passed!!")
    if marks >= 80:
        print("A+")
    else:
        print("Not A+")
else:
    print("Failed")