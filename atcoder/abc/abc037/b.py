def readline():
    return map(int, input().split())

n, q = readline()
a = [0] * n

for i in range(q):
    l, r, t = readline()
    l -= 1; r -= 1;
    for j in range(l, r+1):
        a[j] = t

for i in a:
    print(i)
