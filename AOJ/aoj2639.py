a, b, c = map(int, input().split())
l = 0; r = a;

for i in range(80):
    t = l // 60
    p = 60*t + c
    if l <= p <= r:
        print(p)
        exit()

    l = r + b
    r = l + a

print(-1)
