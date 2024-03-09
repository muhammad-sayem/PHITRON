test = int(input())

while test > 0:

    s = input() 
    s = s[::-1]

    for i in s:
        print(i, end = ' ')
    print()

    test -= 1