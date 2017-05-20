def reads(): return list(map(int, input().split()))

n, x = reads()
a = reads()

for i in range(n-1):
    s = a[i] + a[i+1]
    if s <= x: continue

    sub = s - x
    if sub <= a[i+1]:
        a[i+1] -= sub
    else:
        a[i+1] = 0
        sub


print(x)
