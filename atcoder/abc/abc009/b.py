n = int(input())
s = set() 
for i in range(n):
    s.add(int(input()))
print(sorted(list(s), reverse=1)[1])
