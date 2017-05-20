def readints(): return list(map(int,input().split()))
n, s, t = readints()
w = ans = 0
for i in range(n):
    a = int(input())
    w += a
    if s <= w <= t:
        ans += 1

print(ans)
