#include <iostream>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int main() {
    int n; cin>>n;
    ll a=1, b=1;

    rep(i,n){
        ll s,t; cin>>s>>t;

        ll u = (a-1) / s + 1;
        ll v = (b-1) / t + 1;
        ll w = max(u,v);

        a = w*s; b = w*t;
    }

    cout << a+b << "\n";

    return 0;
}
