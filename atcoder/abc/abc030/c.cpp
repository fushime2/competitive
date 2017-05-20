#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()

ll n,m,x,y;

int main() {
    cin>>n>>m>>x>>y;
    vector<ll> a(n), b(m);
    rep(i,n) scanf("%lld", &a[i]);
    rep(i,m) scanf("%lld", &b[i]);

    ll ans = 0;
    int i=0, j=0, t=0;
    while(1){
        while(i<n and a[i]<t) ++i;
        if(i == n) break;
        t = a[i] + x;
        while(j<m and b[j]<t) ++j;
        if(j==m) break;
        ++ans;
        t = b[j] + y;
    }
    /*
    while(1) {
        auto it = lower_bound(ALL(a), i);
        if(it == a.end()) break;
        int tmp = *it;
        it = lower_bound(ALL(b), tmp + x);
        if(it == b.end()) break;
        ++ans;
        i = *it + y;
    }
    */


    cout << ans << endl;

    return 0;
}
