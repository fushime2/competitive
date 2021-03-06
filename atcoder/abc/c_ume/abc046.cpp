#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int main() {
    int n;
    cin >> n;

    ll a=1, b=1;
    rep(i,n){
        ll s, t;
        cin >> s >> t;

        ll u = (a - 1) / s + 1;
        ll v = (b - 1) / t + 1;
        ll w = max(u, v);
        a = w * s;
        b = w * t;
    }

    cout << a + b << endl;

    return 0;
}
