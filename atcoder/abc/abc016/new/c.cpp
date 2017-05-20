#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define ZERO(a) memset(a,0,sizeof(a))

const int INF = 114514;
int n,m;
int d[11][11];

int main() {
    rep(i,11) rep(j,11) d[i][j] = INF;
    cin >> n >> m;
    rep(i,m) {
        int a,b; cin>>a>>b;
        a--; b--;
        d[a][b] = d[b][a] = 1;
    }

    rep(k,n) rep(i,n) rep(j,n) d[i][j] = min(d[i][j], d[i][k]+d[k][j]);

    rep(i,n) {
        int ans = 0;
        rep(j,n) {
            if(i == j) continue;
            if(d[i][j] == 2) ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}
