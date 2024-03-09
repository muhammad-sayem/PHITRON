# first = input("First number: ")
# second = input("Second number: ")
# third = input("Third number: ")

# a = int(first)
# b = int(second)
# c = int(third)

# if a > b and a > c:
#     print(a)
# elif b > c:
#     print(b)
# else:
#     print(c)

# ------------------------------------------------------------ #

# first = input("First number: ")
# second = input("Second number: ")
# third = input("Third number: ")

# a = int(first)
# b = int(second)
# c = int(third)

# sum = a + b + c
# print(sum)

# ----------------------------------------------------------- #

# for i in range(39, 69, 2):
#     print(i)

# for i in range(39, 69):
#     if i%2 != 0:
#         print(i)

# ------------------------------------------------------------ #

val = input("Enter number: ")
num = int(val)

if num > 100 or num < 0:
    print("Invalid Number")

elif num >= 80 and num <= 100:
    print("A+")

elif num >= 75 and num <= 79:
    print("A")

elif num >= 70 and num <= 74:
    print("A-")

elif num >= 65 and num <= 69:
    print("B+")

elif num >= 60 and num <= 64:
    print("B")

elif num >= 55 and num <= 59:
    print("B-")

elif num >= 50 and num <= 54:
    print("C+")

elif num >= 45 and num <= 49:
    print("C")

elif num >= 40 and num <= 44:
    print("C-")

else:
    print("Fail")

