#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

const int INF = 114514810;
int r,c;
int sx,sy,gx,gy;
char f[55][55];
int d[55][55];
int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};

bool is_in(int nx, int ny) {
    return (0<=nx&&nx<c and 0<=ny&&ny<r);
}

int bfs(void) {
    queue<P> Q; // (x,y)
    rep(i,55) rep(j,55) d[i][j] = INF;
    Q.push(P(sx,sy));
    d[sy][sx] = 0;

    while(Q.size()) {
        P p = Q.front(); Q.pop();
        if(p.first==gx and p.second==gy) break;
        rep(i,4) {
            int nx = p.first+dx[i], ny = p.second+dy[i];
            if(!is_in(nx,ny) or d[ny][nx] != INF or f[ny][nx]=='#') continue;
            Q.push(P(nx,ny));
            d[ny][nx] = d[p.second][p.first] + 1;
        }
    }

    return d[gy][gx];
}

int main() {
    while(cin>>r>>c) {
        cin>>sy>>sx>>gy>>gx;
        sy--;sx--;gy--;gx--;
        rep(i,r) rep(j,c) cin >> f[i][j];

        int ans = bfs();
        cout << ans << "\n";
    }

    return 0;
}
