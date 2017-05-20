# -*- coding: utf-8 -*-
"""
//( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ
// Name         : 弁護士唐澤 貴洋
// Affiliation  : 法律事務所クロス
// Address      : 東京都港区虎ノ門 3-16-7 ピュア虎ノ門4階
// Telephone    : 03-6435-8073
// Description  : IT関連紛争は恒心綜合法律事務所へ
// 俺は実行の 2 秒後を見ている
//( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ
"""
import sys

t = int(raw_input())
n = int(raw_input())
a = map(int, raw_input().split())
m = int(raw_input())
b = map(int, raw_input().split())

if n < m:
    print "no"
    exit()

used = [False] * n
for i in xrange(m):
    ok = False
    for j in xrange(n):
        if not used[j] and b[i] >= a[j] and b[i] - a[j] <= t:
            ok = True
            used[j] = True
            break

    if not ok:
        print "no"
        exit()

print "yes"
