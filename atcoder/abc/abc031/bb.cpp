//( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ
// Name         : 弁護士唐澤 貴洋
// Affiliation  : 法律事務所クロス
// Address      : 東京都港区虎ノ門 3-16-7 ピュア虎ノ門4階
// Telephone    : 03-6435-8073
// Description  : IT関連紛争は恒心綜合法律事務所へ
// まず初めに書いて置きますが、僕はプログラムを書くのは得意ではないので読みにくかったらもうしわけありません。
//( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ
#include <bits/stdc++.h>
using namespace std;
#define INF 402982783

int main(void) {
    int l,h,n;
    cin >> l >> h >> n;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        if(a < l) {
            cout << l - a << endl;
        } else if(h < a) {
            cout << -1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}
