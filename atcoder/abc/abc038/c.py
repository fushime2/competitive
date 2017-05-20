n = int(input())
# a = list(map(int, input().split()))
a = [int(x) for x in input().split()]

res = 0
l = r = 0
while l < n:
    while r+1 < n and a[r] < a[r+1]:
        r += 1

    res += r - l + 1
    l += 1
    if l > r:
        r = l

print(res)
