n, q = map(int,input().split())
arr = list(map(int,input().split()))
pre = [0]

for i in range(0, n):
    pre.append(arr[i]+pre[i])

# print(pre)

while q > 0:
    l, r = map(int,input().split())

    print(pre[r] - pre[l-1])

    q -= 1