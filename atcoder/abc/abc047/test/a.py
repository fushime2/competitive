def readints():
    return map(int, input().split())

a,b,c = readints()
if a+c == b or a == b+c or a+b == c:
    print("Yes")
else:
    print("No")
