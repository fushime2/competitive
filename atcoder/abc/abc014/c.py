a = [0] * 1000010

n = int(input())
for i in range(n):
    l, r = map(int, input().split())
    a[l] += 1
    a[r+1] -= 1

for i in range(1000005):
    a[i+1] += a[i]

print(max(a))
