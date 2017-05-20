a, b = map(int, input().split())

t = abs(a - b)
ans = 0
ans += t // 10
t %= 10
ans += t // 5
t %= 5 
ans += t

print(ans)
