n = int(input())
mul, add, ans = 1, 0, 0

while n > 0:
    if n % 10 == 0:
        ans += (n // 10) * mul
    elif n % 10 == 1:
        ans += (n // 10) * mul
        ans += add + 1
    else:
        ans += (n // 10 + 1) * mul

    add += (n % 10) * mul
    mul *= 10
    n //= 10

print(ans)
