#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back

const int mod = 1e9 + 7;
int n, a, b, m;
int d[111][111];

int main() {
    cin>>n>>a>>b>>m;
    --a; --b;
    mset(d,0);
    rep(i,111) rep(j,111) if(i!=j) d[i][j] = 114514810;

    rep(i,m){
        int x, y; cin>>x>>y;
        --x; --y;
        d[x][y] = d[y][x] = 1;
    }

    rep(k,n) rep(i,n) rep(j,n){
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    }

    int dp[110] = {0}; // 経路数
    dp[a] = 1;

    rep(i,n) {
        rep(j,n){
            if(d[a][j] != i) continue;
            rep(k,n){
                if(d[a][k] == i+1 and d[j][k] == 1) {
                    dp[k] += dp[j];
                    dp[k] %= mod;
                }
            }
        }
    }

    cout << dp[b] << endl;

    return 0;
}
