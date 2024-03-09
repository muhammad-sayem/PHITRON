str = input()
str = str.split(" ")
cnt = flag = 0

for word in str:
    cnt += 1

for word in str:
    flag += 1
    word = word[::-1]

    if flag < cnt:
        print(word, end = " ")
    else:
        print(word)

# --------------------------------------------------------------- #
    
"""
str = input()
str = str.split(" ")

for i, word in enumerate(str):
    if i < len(str)-1:
        print(word[::-1], end = " ")
    else:
        print(word[::-1])

"""