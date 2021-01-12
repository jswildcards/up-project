t = int(input())
for i in range(t):
    n = int(input())
    r = 1
    while n > 0:
        r *= n
        n -= 1
    print(r)
