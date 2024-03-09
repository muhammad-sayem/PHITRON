n = int(input())
str = input()
arr = []
sum = 0

for i in range(len(str)):
    arr.append(int(str[i]))

for i in range(len(str)):
    sum += arr[i]

print(sum)

# ------------------------------------------------------- # 

"""
n = int(input())
str = input()
arr = []

for i in range(len(str)):
    arr.append(int(str[i]))

print(sum(arr))

"""