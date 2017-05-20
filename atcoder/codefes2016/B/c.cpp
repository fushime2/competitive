#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair

void solve(int W, int H) {
    vector<pair<ll,ll>> a;
    rep(i,W) {
        int p; scanf("%d",&p);
        a.pb(mp(p,0));
    }
    rep(i,H) {
        int p; scanf("%d",&p);
        a.pb(mp(p,1));
    }
    sort(ALL(a));

    ll ans = 0;
    for(auto& i : a) {
        if(i.second == 0) {
            ans += i.first * (H + 1);
            --W;
        } else {
            ans += i.first * (W + 1);
            --H;
        }
    }

    cout << ans << "\n";
}

int main() {
    int W, H;
    cin>>W>>H;
    solve(W,H);
    return 0;
}
