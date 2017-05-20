#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ZERO(a) memset(a,0,sizeof(a))

ll sum[100010];

int main() {
    ZERO(sum);
    int n,k;
    cin>>n>>k;
    rep(i,n) {
        int t; scanf("%d",&t);
        sum[i+1] = sum[i] + t;
    }

    ll ans = 0;
    for(int i=k; i<=n; i++) ans += (sum[i] - sum[i-k]);
    cout << ans << "\n";

    return 0;
}
