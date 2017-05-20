#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

const int mod = 1e9 + 7;
int n, k;

ll f[202020] = {0}; // f(n) = (n!) % mod

// 繰り返し二乗法 O(log n)
ll mod_pow(ll x, ll n){
    ll res = 1LL;
    while(n > 0){
        if(n & 1) res = res * x % mod;
        x = x*x % mod;
        n >>= 1;
    }
    return res;
}

ll mod_inv(ll x){
    return mod_pow(x, mod-2) % mod;
}

// nCr % mod
ll comb(int n, int r){
    return (((f[n] * mod_inv(f[r])) % mod) * mod_inv(f[n-r])) % mod;
}

int main() {
    cin>>n>>k;
    
    f[0] = f[1] = 1;
    FOR(i,2,200110) f[i] = (i * f[i-1]) % mod;

    // nHk = comb(n-1+K, n-1);
    ll ans = comb(n-1+k, k);
    cout << ans << "\n";

    return 0;
}
