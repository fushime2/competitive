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

int main(void) {
    string s;
    cin >> s;
    int i;
    for(i=0; ; ) {
        if(s[i]=='o' or s[i]=='k' or s[i]=='u') i++;
        else if(s[i]=='c' and s[i+1]=='h') i += 2;
        else break;
    }
    puts(i==(int)s.size() ? "YES" : "NO");

    return 0;
}
