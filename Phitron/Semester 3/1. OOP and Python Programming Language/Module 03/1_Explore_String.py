# In Python string is immutable (Unchangable) but list is mutable (Changable)

# name1 = "Muhammad Sayem"
# name2 = "Muhammad Sayem"
# name3 = """
#     Muhammad Sayem
#     Dept. of CSE, BUBT
# """
# name4 = """Muhammad Sayem\nDept. of CSE, BUBT"""

# print(name1)
# print(name2)
# print(name3)
# print(name4)

# if 'Sayem' in name1:
#     print("Exists")
# else:
#     print("Does not exist")

# -------------------------------------------------------- #

name = "Muhammad Sayem"

print(name.upper())             # MUHAMMAD SAYEM
print(name.lower())             # muhammad sayem
print(name.title())             # Muhammad Sayem
print(name.swapcase())          # mUHAMMAD sAYEM
print(name.capitalize())        # Muhammad sayem
print(name.casefold())          # muhammad sayem

cnt = name.count('m')
print("Character Count:",cnt)

text = "geeks for geeks"
count = text.count("geeks")
print("Word Count:", count)