#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

const int MAX_LEN = 4000;
int dp[MAX_LEN+1][MAX_LEN+1];

void solve(string s, string t) {
    int n = s.size(), m = t.size();
    rep(i,n) rep(j,m) {
        if(s[i] == t[j]) {
            bool f = (s[i+1] == t[j+1]);
            dp[i+1][j+1] = max(dp[i][j] + f, max(dp[i][j+1],dp[i+1][j]));
        } else {
            dp[i+1][j+1] = max(dp[i][j], max(dp[i][j+1],dp[i+1][j]));
        }
    }

    cout << dp[n][m] << "\n";

    return ;
}

int main() {
    string s, t;
    while(cin>>s>>t) {
        memset(dp, 0, sizeof(dp));
        solve(s,t);
    }

    return 0;
}
