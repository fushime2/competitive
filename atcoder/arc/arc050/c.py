A, B, M = map(int, raw_input().split())

x = '1' * A
y = '1' * B

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a%b)

def lcm(a, b):
    return a * b / gcd(a, b)

print lcm(int(x), int(y)) % M
