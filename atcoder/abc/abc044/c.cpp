#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define mset(a,x) memset(a,x,sizeof(a))

ll dp[51][51][3000];

int main() {
    int n, a;
    cin >> n >> a;
    vector<int> x(n);
    for(int& i : x) cin >> i;

    mset(dp, 0);
    dp[0][0][0] = 1;
    FOR(j, 1, n+1){
        FOR(k, 0, j+1){
            FOR(s, 0, 2500+1){
                dp[j][k][s] = dp[j-1][k][s];
                if(k>=1 and s>=x[j-1]){
                    dp[j][k][s] += dp[j-1][k-1][s-x[j-1]];
                }
            }
        }
    }

    ll ans = 0;
    FOR(i,1,n+1) if(a*i < 2510) ans += dp[n][i][a*i];
    cout << ans << endl;

    return 0;
}
