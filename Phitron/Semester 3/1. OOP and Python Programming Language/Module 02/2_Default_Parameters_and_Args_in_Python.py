""" 
def sum (n1, n2, n3 = 0, n4 = 0, n5 = 0):
    ans = n1 + n2 + n3 + n4 + n5
    return ans

print("Answer:", sum(10, 30, 60))

"""

# --------------------------------------------------------- #

#####               Args                #####

# '*args' ekhane onekta array er moto chinta kora jay, joto gula value input deya hbe shb gula 'args' er moddhe dhukbe #

# def sum(*args):
#     print(args)              # output: (12, 23, 45, 34)
#     sum = 0

#     for num in args:
#         print(num)                  # Output: 12 23 45 34
#         sum += num
#     return sum

# res = sum(12, 23, 45, 34)
# print("Answer: ", res)              # Output: 114  

 
def names(firstPerson, *args):
    print(firstPerson)
    print(args)

names("Nasim", "Sayem", "Sumon", "Nafis", "Akib")


