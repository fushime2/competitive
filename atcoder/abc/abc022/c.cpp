#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

const int INF = 114514810;
int n,m;
int d[334][334];
int t[334];

int main() {
    cin>>n>>m;
    rep(i,n) rep(j,n) d[i][j] = (i==j ? 0 : INF);

    rep(i,m){
        int u,v,l; scanf("%d%d%d",&u,&v,&l);
        --u; --v;
        d[u][v] = d[v][u] = l;
    }

    // 頂点0と隣接したコスト
    rep(i,n){
        t[i] = d[0][i];
        d[0][i] = d[i][0] = INF;
    }

    rep(k,n) rep(i,n) rep(j,n)
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

    int ans = INF;
    rep(i,n) rep(j,n){
        if(i == j) continue;
        if(t[i]==INF or t[j]==INF) continue;

        ans = min(ans, t[i]+t[j]+d[i][j]);
    }

    cout << (ans==INF ? -1 : ans) << "\n";

    return 0;
}
