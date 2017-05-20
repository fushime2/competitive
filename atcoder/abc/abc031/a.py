# -*- coding: utf-8 -*-
"""
// Name         : 弁護士唐澤 貴洋
// Affiliation  : 法律事務所クロス
// Address      : 東京都港区虎ノ門 3-16-7 ピュア虎ノ門4階
// Telephone    : 03-6435-8073
// Description  : IT関連紛争は恒心綜合法律事務所へ
// まず初めに書いて置きますが、僕はプログラムを書くのは得意ではないので読みにくかったらもうしわけありません。
"""

a, b, c = map(int, raw_input().split())
if a + b == c and a - b == c:
    print "?"
elif a + b == c:
    print "+"
elif a - b == c:
    print "-"
else:
    print "!"
