n = int(input())
arr = list(map(int, input().split()))

minn = min(arr)
maxx = max(arr)

minIndex = arr.index(minn)
maxIndex = arr.index(maxx)

temp = arr[minIndex]
arr[minIndex] = arr[maxIndex]
arr[maxIndex] = temp

for i in range(n):
    print(arr[i], end = " ")