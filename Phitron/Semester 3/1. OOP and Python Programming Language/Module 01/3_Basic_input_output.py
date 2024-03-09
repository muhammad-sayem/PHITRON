# print ("I need money")
# input()

# input("Give me sme money: ")

""" 
money = input("Give me some money: ")
print("Here is your money", money)

text = f"Here is your {money} taka"
print(text)

"""

# Note: By default the input given from user is considered as string

""" 
first_money = input("Alif, give me somne money: ")
second_money = input("Sumon, give me somne money: ")

print(type(first_money))        # data type: <class 'str'> 

print("I got ", first_money, "taka from Alif and ", second_money, "taka from Sumon")

"""

#####       Typecasting         ##### 

# String (by default) to int 

""" 
first_money = input("Alif, give me somne money: ")
second_money = input("Sumon, give me somne money: ")

first_money_int = int(first_money)
second_money_int = int(second_money)            # data type: <class 'int'>

# print(type(first_money_int))

total = first_money_int + second_money_int
print("Total I got", total, "taka")

"""

# String (by default) to float
""" 
val1 = input("Val 1: ")
val2 = input("Val 2: ")

val1_float = float(val1)
val2_float = float(val2)

print(val1_float + val2_float)

"""

# Number to String

""" 
num = 20
converted_num = str(num)

print(type(converted_num))

"""