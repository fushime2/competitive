#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int main(void) {
    int n, x;
    cin >> n >> x;
    int v[n];
    rep(i,n) cin >> v[i];

    int ans = 0;
    for(int i=0; x ; i++) {
        if((x & 1) == 1) ans += v[i];
        x = x >> 1;
    }
    cout << ans << '\n';

    return 0;
}
