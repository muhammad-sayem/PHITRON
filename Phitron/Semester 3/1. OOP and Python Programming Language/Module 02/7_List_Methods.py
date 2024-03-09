numbers = [12, 65, 76, 83, 42]
numbers.append(51)                  # append holo push
print(numbers)

# ------------------------------------------------------- #

numbers.insert(1, 71)               # (position, element)
print(numbers)

# ------------------------------------------------------- #

# If the element is in the list only then we can remove the element from the list

if 76 in numbers:
    numbers.remove(76)
print(numbers)

if 34 in numbers:
    numbers.remove(34)
print(numbers)

# ------------------------------------------------------- #

last = numbers.pop()            # This pop function removes the the last element of the list and also it returns the last element that we can store directly 
print(numbers)
print("Last:", last)

# ------------------------------------------------------- #

if 65 in numbers:
    index = numbers.index(65)           # If the elemet does not exist in the list then in returns -1 
    print("Index:", index)

# ------------------------------------------------------- #

count = numbers.count(65)
print("Count:", count)

# ------------------------------------------------------- #

numbers.sort()
print(numbers)

# ------------------------------------------------------- #

numbers.reverse()
print(numbers)
