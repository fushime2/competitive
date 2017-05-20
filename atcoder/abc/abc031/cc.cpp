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

int rel[20][20];
bool d[20][20];

void init(void) {
    for(int i=0; i<20; i++) {
        for(int j=0; j<20; j++) {
            if(i != j and !d[i][j]) {
                rel[i][j] = INF;
            }
        }
    }
}

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0; i<m; i++) {
        int a,b;
        scanf("%d %d", &a, &b);
        rel[a][b]++; rel[b][a]++;
        d[a][b] = d[b][a] = true;
    }
    init();

    // warshall-floyd
    for(int k=1; k<=n; k++)
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++) rel[i][j] = min(rel[i][j], rel[i][k] + rel[k][j]);

    int cnt = 0;
    for(int i=1; i<=n; i++) {
        cnt = 0;
        for(int j=1; j<=n; j++) {
            if(i == j) continue;
            if(rel[i][j] == 2) cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}
