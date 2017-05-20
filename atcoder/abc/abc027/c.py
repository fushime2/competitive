n = int(input())

i = 0
while 1:
    if 2 ** i <= n < 2 ** (i+1):
        if i == 0:
            print("Aoki")
            print(i)
        elif i % 2 == 1:
            print("Aoki")
            print(i)
        else:
            print("Takahashi")
            print(i)
        exit()
    i += 1
