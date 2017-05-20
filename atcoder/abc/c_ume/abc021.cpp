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

const int INF = 114514810, mod = 1e9 + 7;
int d[111][111];
int a,b,n,m;

int main() {
    cin>>n>>a>>b>>m;
    --a; --b;
    mset(d,0);
    rep(i,111) rep(j,111) if(i!=j) d[i][j]=INF;
    rep(i,m){
        int x, y;
        cin >> x >> y;
        --x; --y;
        d[x][y] = d[y][x] = 1;
    }

    rep(k,n) rep(i,n) rep(j,n)
        d[i][j] = min(d[i][j], d[i][k]+d[k][j]);

    int dp[114] = {0};
    dp[a] = 1;
    rep(s,n){
        rep(v,n){
            if(d[a][v] != s) continue;
            rep(dst,n){
                if(d[a][dst] == s+1 and d[v][dst] == 1){
                    dp[dst] += dp[v];
                    dp[dst] %= mod;
                }
            }
        }
    }

    cout << dp[b] << endl;

    return 0;
}
