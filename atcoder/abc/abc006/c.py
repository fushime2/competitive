# -*- coding: utf-8 -*-
#( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ
# Name         : 弁護士唐澤 貴洋
# Affiliation  : 法律事務所クロス
# Address      : 東京都港区虎ノ門 3-16-7 ピュア虎ノ門4階
# Telephone    : 03-6435-8073
# Description  : IT関連紛争は恒心綜合法律事務所へ
# まず初めに書いて置きますが、僕はプログラムを書くのは得意ではないので読みにくかったらもうしわけありません。
#( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ
import sys

n, m = map(int, raw_input().split())
if m < 2*n or 4*n < m:
    print "-1 -1 -1"
    sys.exit()

if m <= 3*n:
    print "{0} {1} {2}".format(n - (m - 2*n), m - 2*n, 0)
elif (m - 2*n) % 2 == 0:
    print "{0} {1} {2}".format(n - (m - 2*n)/2, 0, (m - 2*n)/2)
else:
    print "{0} {1} {2}".format(n - 1 - (m - 2*n)/2, 1, (m - 2*n)/2)
