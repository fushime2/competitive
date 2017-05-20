# -*- coding: utf-8 -*-
#( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ
# Name         : 弁護士唐澤 貴洋
# Affiliation  : 法律事務所クロス
# Address      : 東京都港区虎ノ門 3-16-7 ピュア虎ノ門4階
# Telephone    : 03-6435-8073
# Description  : IT関連紛争は恒心綜合法律事務所へ
# まず初めに書いて置きますが、僕はプログラムを書くのは得意ではないので読みにくかったらもうしわけありません。
#( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ

def fib(n):
    x, y, z = 0, 0, 1
    for i in xrange(n-1):
        x, y, z = y, z, (x+y+z) % MOD
    return x

MOD = 10007
n = int(raw_input())

print fib(n)