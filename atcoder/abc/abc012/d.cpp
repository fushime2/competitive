#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

const int INF = 114514810;
int n, m;
int d[320][320];

void init() {
    rep(i,n) rep(j,n) if(i != j) d[i][j] = INF;
}

int main() {
    scanf("%d%d",&n,&m);
    init();
    rep(i,m) {
        int a, b, time;
        scanf("%d%d%d", &a, &b, &time);
        a--; b--;
        d[a][b] = d[b][a] = time;
    }

    rep(k,n) rep(i,n) rep(j,n) d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

    int ans = INF;
    rep(i,n) {
        int max_time = -1;
        rep(j,n) {
            if(i == j) continue;
            max_time = max(max_time, d[i][j]);
        }
        ans = min(ans, max_time);
    }

    printf("%d\n", ans);

    return 0;
}
