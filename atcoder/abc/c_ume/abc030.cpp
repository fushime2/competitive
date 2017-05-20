#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) (int)(x).size()

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vi a(n), b(m);
    rep(i,n) scanf("%d", &a[i]);
    rep(i,m) scanf("%d", &b[i]);

    ll ans = 0, time = 0;
    while(1){
        auto it = lower_bound(ALL(a), time);
        if(it == a.end()) break;
        auto tmp = *it;
        it = lower_bound(ALL(b), tmp + x);
        if(it == b.end()) break;
        ++ans;
        time = *it + y;
    }

    cout << ans << endl;

    return 0;
}
