n = int(input())
l = [int(x)-1 for x in input().split()]

cnt = 0
for i in range(n):
    if l[l[i]] == i: cnt += 1

print(cnt // 2)
