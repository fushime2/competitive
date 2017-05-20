A = []
B = []
for i in range(4):
    A.append(int(input()))
for i in range(2):
    B.append(int(input()))

A.sort(reverse=True)
B.sort(reverse=True)
ans = sum(A[:3]) + B[0]
print(ans)
