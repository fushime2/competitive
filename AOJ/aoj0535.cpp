#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ZERO(a) memset(a,0,sizeof(a))

int f[100][100];
int m,n;
int ans;
int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};

bool ng(int x, int y) {
    return x<0 or m<=x or y<0 or n<=y;
}

void dfs(int x, int y, int d) {
    ans = max(ans, d);
    rep(i,4) {
        int nx = x+dx[i], ny = y+dy[i];
        if(!ng(nx,ny) and f[ny][nx] == 1) {
            f[ny][nx] = 0;
            dfs(nx,ny,d+1);
            f[ny][nx] = 1;
        }
    }
    return ;
}

void solve() {
    ans = 0;
    rep(y,n) rep(x,m) {
        if(f[y][x] == 0) continue;
        f[y][x] = 0;
        dfs(x,y,1);
        f[y][x] = 1;
    }
    cout << ans << "\n";
    return ;
}

int main() {
    while(cin>>m>>n && m) {
        ZERO(f);
        rep(y,n) rep(x,m) cin >> f[y][x];
        solve();
    }

    return 0;
}
