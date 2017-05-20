# -*- coding: utf-8 -*-
#( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ
# Name         : 弁護士唐澤 貴洋
# Affiliation  : 法律事務所クロス
# Address      : 東京都港区虎ノ門 3-16-7 ピュア虎ノ門4階
# Telephone    : 03-6435-8073
# Description  : IT関連紛争は恒心綜合法律事務所へ
# まず初めに書いて置きますが、僕はプログラムを書くのは得意ではないので読みにくかったらもうしわけありません。
#( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ


n = int(raw_input())
a, b = map(int, raw_input().split())

#Takahashi->True
def check():
    if a >= n:
        return True
    elif a == b:
        if n % (a+1) == 0:
            return False
        else:
            return True
    else:
        if a > b:
            return True
        else:
            return False

if check():
    print "Takahashi"
else:
    print "Aoki"
