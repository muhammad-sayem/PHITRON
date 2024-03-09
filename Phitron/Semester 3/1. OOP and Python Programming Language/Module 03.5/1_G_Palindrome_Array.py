n = int(input())

arr1 = list(map(int, input().split()))
arr2 = arr1[::-1]

if arr1 == arr2:
    print("YES")
else:
    print("NO")