#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n,h,a,b,c,d,e;
    cin>>n>>h>>a>>b>>c>>d>>e;

    ll res = 1LL << 60;
    for(ll x=0; x<=n; ++x){
        ll z = n - x;
        ll t = h + x*b;

        ll y = 0;
        if(t > z * e)
            y = 0;
        else
            y = max(0.0, (z*e - t) / (d + e) + 1.0);

        res = min(res, x*a + y*c);
    }

    cout << res << endl;

    return 0;
}
