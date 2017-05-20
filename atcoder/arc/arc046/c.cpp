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

int n, m;

int main(void) {
    cin >> n >> m;
    int a[n], b[n];
    int c[m], d[m];
    for(int i=0; i<n; i++) cin >> a[i] >> b[i];
    for(int i=0; i<m; i++) cin >> c[i] >> d[i];

    sort(a, a+n);
    sort(b, b+n);
    sort(c, b+m);
    sort(d, b+m);

    int p = 0;
    int k = 0;
    int ans = 0;
    while(p < n and k < m) {
        if(d[p] <= a[k]) {
            ans++;
            p++;
            k++;
            cout << "test1" << endl;
        } else {
            break;
            cout << "test2" << endl;
        }
    }
    cout << ans << endl;

    return 0;
}
