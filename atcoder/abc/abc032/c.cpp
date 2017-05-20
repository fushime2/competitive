#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int s[100010];

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    rep(i,n) {
        scanf("%d", &s[i]);
        if(s[i] == 0) {
            printf("%d\n", n);
            return 0;
        }
    }
    if(k == 0) {puts("0"); return 0;}
    s[n++] = 114514810;

    ll tot = 1;
    int l = 0, r = 0, ans = 0;
    while(l < n) {
        while(r < n and tot <= k) tot *= s[r++];
        ans = max(ans, r-l-1);
        tot /= s[l++];
    }

    printf("%d\n", ans);

    return 0;
}
