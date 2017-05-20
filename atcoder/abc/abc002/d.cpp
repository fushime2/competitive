#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100

int main(void) {
    bool c[15][15] = {};
    int n, m, x, y;
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        cin >> x >> y;
        c[x-1][y-1] = c[y-1][x-1] = true;
    }

    int ans = 0;
    for(int S = 1<<n; --S; ) {
    //for(int S=0; S < (1<<n); S++) {
        cout << S << endl;
        int t = bitset<32>(S).count();
        if(t <= ans) continue;

        bool ok = true;
        for(int i=0; i<n; i++) {
            for(int j=0; j<i; j++) {
                if(S >> i & S >> j & 1 and !c[i][j]) {
                    ok = false;
                    break;
                }
            }
        }
        if(ok) {
            cout << "S=" << S << endl;
            ans = t;
        }
    }
    cout << ans << endl;

    return 0;
}
