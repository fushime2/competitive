# -*- coding: utf-8 -*-
n = int(raw_input())
a = map(int, raw_input().split())
INF = 40298

KRSW = -INF
for k in xrange(n):
    ma = mt = -INF
    for j in xrange(n):
        i = k
        if i == j: continue
        if i > j:
            i, j = j, i
        T = a[i:j+1]
        aok = sum(T[1: :2])
        if aok > ma:
            ma = aok
            mt = sum(T[ : :2])
    KRSW = max(KRSW, mt)

print KRSW 
