#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> sum(100010, 0);
    ll tot = 0;
    rep(i,n){
        int l, r, s;
        scanf("%d%d%d", &l, &r, &s);
        tot += s;
        sum[l] += s;
        sum[r+1] -= s;
    }

    ll mini = 1LL << 60;
    FOR(i,1,m+1){
        sum[i] += sum[i-1];
        mini = min(mini, sum[i]);
    }

    ll res = tot - mini;
    cout << res << endl;

    return 0;
}
