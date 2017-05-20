n = int(input())
l = list()
s = set()
for i in range(n):
    a = input()
    l.append(a)
    s.add(a)

max_count = -1
res = ""
for i in s:
    cnt = l.count(i)
    if cnt > max_count:
        max_count = cnt
        res = i
print(res)
