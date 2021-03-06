#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define vi vector<int>
#define pb push_back
#define mp make_pair

int INF = 114514810;
int n, m;
int d[333][333];

int main() {
    cin >> n >> m;
    mset(d, 0);
    rep(i,n) rep(j,n) if(i!=j) d[i][j] = INF;
    rep(i,m){
        int u,v,l;
        scanf("%d%d%d",&u,&v,&l);
        --u; --v;
        d[u][v] = d[v][u] = l;
    }

    vi t(n);
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
        ans = min(ans, t[i] + t[j] + d[i][j]);
    }

    cout << (ans>=INF ? -1 : ans) << endl;

    return 0;
}
