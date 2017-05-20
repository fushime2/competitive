#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define SYAMU(a) memset(a,0,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"

const ll MOD = 1e9 + 7;
const int M = 200009;
int h,w,a,b;
ll f[M];
ll inv[M];

void init() {
    SYAMU(f); SYAMU(inv);
}

// ari114
ll mod_pow(ll x, ll n) {
    ll res = 1;
    while(n > 0) {
        if(n & 1) res = res * x % MOD;
        x = x * x % MOD;
        n >>= 1;
    }
    return res;
}

ll nCk(ll n, ll k) {
    return f[n] * inv[k] % MOD * inv[n-k] % MOD;
}

int main() {
    while(cin>>h>>w>>a>>b) {
        init();
        f[0] = inv[0] = 1;
        for(int i=1; i<=h+w; i++) {
            f[i] = i * f[i-1] % MOD;
            inv[i] = mod_pow(f[i], MOD-2);
        }

        ll ans = 0;
        /*
        rep(i, h-a) {
            ans = (ans + nCk(b-1+i, i) * nCk(w-b-1 + h-1-i, w-b-1)) % MOD;
        }
        */

        rep(i,w-b) {
            int p = 1LL * nCk(a+i-1, i) * nCk(w-i+h-a-2, h-a-1) % MOD;
            ans = (ans + p) % MOD;
            dbg(a+i-1);
            //dbg(nCk(a+i-1,i));
            dbg(w-i+h-a-2);
            //dbg(nCk(w-i+h-a-2, h-a-1));
        }

        cout << ans % MOD << "\n";
    }

    return 0;
}
