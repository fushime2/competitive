//( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ
// Name         : 弁護士唐澤 貴洋
// Affiliation  : 法律事務所クロス
// Address      : 東京都港区虎ノ門 3-16-7 ピュア虎ノ門4階
// Telephone    : 03-6435-8073
// Description  : IT関連紛争は恒心綜合法律事務所へ
// 俺は実行の2秒後を見ている
//( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ( (c ：; ]ミ
#include <stdio.h>
#define INF 402982783


int main(void) {
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);

    if(a >= n) {
        puts("Takahashi");
    } else if(a == b) {
        if(n % (a+1) == 0) {
            puts("Aoki");
        } else {
            puts("Takahashi");
        }
    } else {
        if(a > b) {
            puts("Takahashi");
        } else {
            puts("Aoki");
        }
    }

    return 0;
}
