#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,0,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"

const int MOD = 10000;
int dp[110][3][3];

void solve(int N, int K) {
    int pasta[110]; MINUS(pasta);
    rep(i,K) {
        int a,b; scanf("%d%d",&a,&b);
        b--;
        pasta[a] = b;
    }

    dp[0][0][0] = 1;
    FOR(i,1,N+1) {
        rep(j,3) {
            if(pasta[i] != -1 and j != pasta[i]) continue;
            rep(k,3) {
                rep(l,3) {
                    if(i >= 3 and j==k and k==l) continue;
                    dp[i][j][k] += dp[i-1][k][l];
                    dp[i][j][k] %= MOD;
                }
            }
        }
    }

    int ans = 0;
    rep(j,3) rep(k,3) {
        ans += dp[N][j][k];
        ans %= MOD;
    }
    cout << ans << "\n";
}

int main() {
    ZERO(dp);
    int N, K; scanf("%d%d",&N,&K);
    solve(N,K);

    return 0;
}
