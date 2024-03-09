test = int(input())

while test > 0:

    x, y = map(int, input().split())

    minn = min(x,y)
    maxx = max(x,y)

    sum = 0

    for i in range(minn+1, maxx):
        if(i%2 != 0):
            sum += i

    print(sum)

    test -= 1