def readints():
    return map(int, input().split())

L, H = readints()
N = int(input())

for i in range(N):
    a = int(input())
    if a < L:
        print(L - a)
    elif H < a:
        print(-1)
    else:
        print(0)
