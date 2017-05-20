#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)


int main() {
    int n;
    cin >> n;
    vi a(n);
    for(int& i : a) scanf("%d", &i);

    vector<ll> dp(100010, 0);
    dp[0] = 0;
    dp[1] = abs(a[1] - a[0]);
    FOR(i,2,n){
        ll x = dp[i-1] + abs(a[i] - a[i-1]);
        ll y = dp[i-2] + abs(a[i] - a[i-2]);
        dp[i] = min(x, y);
    }

    cout << dp[n-1] << endl;

    return 0;
}
