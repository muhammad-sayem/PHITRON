x, n = map(int, input().split())
ans = 0

for p in range(2, n+1, 2):
    ans += x**p

print(ans)