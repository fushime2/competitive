#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n,h,a,b,c,d,e;

int main() {
    cin>>n>>h>>a>>b>>c>>d>>e;
    
    ll ans = 1LL << 60;
    for(ll x=0; x<=n; ++x){
        double t = e*n - h - (b + e) * x;
        ll y = 0;
        if(t < 0) y = 0;
        else
            y = max(0.0, t / (d + e) + 1.0);
        ans = min(ans, a*x + c*y);
    }

    cout << ans << endl;

    return 0;
}
