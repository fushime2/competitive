x = 114514
y = 364364
z = 512810

def xorshift():
    global x,y,z
    t = (x ^ (x << 3)) ^ (y ^ (y >> 19)) ^ (z ^ (z << 6))
    x,y,z = y,z,t
    return z 

for i in range(50):
    rnd = xorshift() % 100
    print(rnd)
