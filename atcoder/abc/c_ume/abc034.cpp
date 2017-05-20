#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

const int MOD = 1e9 + 7;
int w, h;
ll f[200010];

ll mod_pow(ll x, ll n, int MOD){
    ll res = 1;
    while(n > 0){
        if(n & 1) res = res * x % MOD;
        x = x*x % MOD;
        n >>= 1;
    }
    return res;
}

ll invf(int n, int p){
    return mod_pow(n, p-2, MOD);
}

ll comb(int n, int r, int MOD){
    return (((f[n] * invf(f[r],MOD)) % MOD) * invf(f[n-r],MOD)) % MOD;
}

int main() {
    cin >> w >> h;
    f[0] = f[1] = 1;
    FOR(i,2,w+h+5) f[i] = (i * f[i-1]) % MOD;

    cout << comb(w+h-2, w-1, MOD) << endl;


    return 0;
}
