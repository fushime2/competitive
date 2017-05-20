from sys import exit
s = input()
s + "$"
i = 0;
while i < len(s) - 1:
    if (s[i] == 'c' and s[i+1] == 'h'):
        i += 2
    elif (s[i]=='o' or s[i]=='k' or s[i]=='u'):
        i += 1
    else:
        print("NO")
        exit(0)

print("YES")
