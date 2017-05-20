#include <iostream>
using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;
int w, h;
ll f[200010] = {0}; // f(n) = (n!) % mod

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

ll comb(int n, int r){
    return (((f[n] * mod_inv(f[r])) % mod) * mod_inv(f[n-r])) % mod;
}

int main() {
    cin >> w >> h;
    f[1] = 1;
    for(int i=2; i<=w+h-2; ++i) f[i] = (i * f[i-1]) % mod;
    ll res = comb(h+w-2, h-1);
    cout << res << endl;
    return 0;
}
