n = int(input())
a = list(map(int, input().split()))

if sum(a) % n != 0:
    print(-1)
    exit()

tot = ans = 0
ave = sum(a) // n
for i in range(n):
    tot += a[i]
    if tot != ave * (i+1):
        ans += 1
    
print(ans)
