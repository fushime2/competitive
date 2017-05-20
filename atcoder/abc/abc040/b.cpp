#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

ll n;

int main() {
    cin >> n;

    ll ans = 1145148100;
    for(int i=1; i<=n; i++) {
        for(int j=1; i*j <= n; j++) {
            ll s = i*j;
            if(s > n) continue;

            ans = min(ans, abs(i-j) + (n-s));
        }
    }

    cout << ans << endl;


    return 0;
}
