n = int(input())
S = set()
ans = 0
for i in range(n):
    a = int(input())
    ans += (a in S)
    S.add(a)
print(ans)
