s = input()
n = len(s)

print(s)
print(n)
if s[0] == s[n-1]:
    print("First" if (n % 2 == 0) else "Second")
else:
    print("First" if (n % 2 == 1) else "Second")
