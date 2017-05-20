//( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ
// Name         : 弁護士唐澤 貴洋
// Affiliation  : 法律事務所クロス
// Address      : 東京都港区虎ノ門 3-16-7 ピュア虎ノ門4階
// Telephone    : 03-6435-8073
// Description  : IT関連紛争は恒心綜合法律事務所へ
// Site         : http://xn--pckua9mk08ipred6vxkedtz.com/
// まず初めに書いて置きますが、僕はプログラムを書くのは得意ではないので読みにくかったらもうしわけありません。
//( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ
#include <bits/stdc++.h>
using namespace std;
#define INF 402982783
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
typedef long long ll;

int r[15][15];
int main(void) {
    int n, m;
    cin >> n >> m;
    rep(i,n) rep(j,n) if(i!=j) r[i][j] = INF;
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        r[a][b] = r[b][a] = 1;
    }

    rep(k,n) rep(i,n) rep(j,n) {
        r[i][j] = min(r[i][k] + r[k][j], r[i][j]);
    }
    
    rep(i,n) {
        int ans = 0;
        rep(j,n)
            if(i!=j and r[i][j] == 2) ans++;
        cout << ans << endl;
    }

    return 0;
}
