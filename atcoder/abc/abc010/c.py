from math import sqrt

def dist(x1,y1,x2,y2):
    return sqrt((x1-x2)**2 + (y1-y2)**2)

sx,sy,gx,gy,t,v = map(int, input().split())
all_dist = t * v

n = int(input())
flag = False
for i in range(n):
    x, y = map(int, input().split())
    d1 = dist(x,y,sx,sy)
    d2 = dist(x,y,gx,gy)
    d = d1 + d2

    if all_dist >= d:
        flag = True

print("YES" if flag else "NO")
