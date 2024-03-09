# tuple --> ()
# set ----> {}
# list ---> []

# Collection of unique items

"""

numbers = [62, 89, 17, 46, 62, 50, 17, 50, 99, 17]
print(numbers)

unique = set(numbers)
print(unique)

unique.add(39)
print(unique)

unique.remove(17)
print(unique)

"""

A = {1, 3, 5}
B = {1, 2, 3, 4, 5}

print(A & B)            # A intersect B (elements that contains in both sets)
print(A | B)            # A union B