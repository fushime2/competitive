#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int p[10010];

int main() {
    while(1){
        int m, nmin, nmax;
        cin >> m >> nmin >> nmax;
        if(m == 0 and nmin == 0 and nmax == 0) break;
        memset(p, 0, sizeof(p));
        rep(i,m) cin >> p[i];

        int ans = 0, mx = -1;
        for(int i = nmin-1; i < nmax; i++){
            int diff = p[i] - p[i+1];
            if(diff >= mx){
                mx = diff;
                ans = i+1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
