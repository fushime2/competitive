#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ZERO(a) memset(a,0,sizeof(a))

int F[110][110];

void solve(int n) {
    ZERO(F);
    int w,h; cin>>w>>h;
    rep(i,n) {
        int x,y; cin>>x>>y;
        --x; --y;
        F[y][x] = 1;
    }
    int s,t; cin>>s>>t; // w,h

    int ans = 0;
    rep(y,h-t+1) rep(x,w-s+1) {
        int cnt = 0;
        FOR(i,y,y+t) FOR(j,x,x+s) if(F[i][j] == 1) ++cnt;
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
}

int main() {
    int n;
    while(cin>>n && n) solve(n);
    return 0;
}
