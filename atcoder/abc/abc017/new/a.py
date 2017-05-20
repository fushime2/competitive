def reads(): return list(map(int,input().split()))
ans = 0
for i in range(3):
    a, b = reads()
    ans += a * (b/10)
print(int(ans))
