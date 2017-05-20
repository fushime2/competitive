from math import factorial as fact

MOD = int(1e9 + 7)
w, h = map(int, input().split())

def inv(x):
    return pow(x, MOD-2, MOD)

def comb(n, r):
    return (fact(n) * inv(fact(n-r)) * inv(fact(r))) % MOD

print(comb(h+w-2, h-1))
