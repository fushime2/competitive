#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(ll i=(a);i<(ll)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int main() {
    ll a, b; cin >> a >> b;
    ll ret = 0;
    for(ll i=1; i<=a; ++i) {
        ret += (i*i);
        ret %= b;
    }

    cout<<ret<<"\n";

    return 0;
}
