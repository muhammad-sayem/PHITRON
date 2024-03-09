# Array, List, Collection (same in simple terms)

# Index =  0   1   2   3   4    5   6  7   8   9
numbers = [45, 89, 78, 54, 12, 67, 34, 40, 87, 53]
# Index = -10  -9  -8  -7  -6  -5  -4  -3  -2  -1

print(numbers[3], numbers[-3])

# Format: list(start: end)      # Start index: end index er ag porjonto kaj kore

"""
print(numbers[2: 6])             
print(numbers[1: 7])  

print(numbers[5:])          # start je index deya thakbe shekhan theke last porjonto jabe
print(numbers[:5])          # 0-th index theke end je index deya ase tar ag porjonto ashe
print(numbers[:])           # start theke end porjonto shob print kore

"""

# Format: list(start: end: step)      # Start index: end index er ag porjonto kaj kore with koto steps kore index agabe sheta bole deya hoy

"""
print(numbers[0: 7: 1])
print(numbers[0: 7: 2])

print(numbers[7: 2: -1])            # Reverse access kora jay evabe 
print(numbers[7: 2: -2])            # Reverse access kora jay evabe

"""

# Shortcut to Reverse a list

print(numbers[: : -1])