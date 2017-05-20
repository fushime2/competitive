#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define mset(a,x) memset(a,x,sizeof(a))
#define mp make_pair

int r,c,sy,sx,gy,gx;
int f[55][55];
int d[55][55];
int dx[]={1,0,-1,0}, dy[]={0,1,0,-1};
const int INF = 114514;

bool is_out(int nx, int ny){
    return (nx<0 or ny<0 or nx>=c or ny>=r);
}

typedef pair<int,int> P;
int bfs(){
    rep(i,55) rep(j,55) d[i][j] = INF;
    queue<P> q;
    q.push(mp(sx,sy));
    d[sy][sx] = 0;

    while(!q.empty()){
        auto p = q.front(); q.pop();
        int px=p.first, py=p.second;
        rep(i,4){
            int nx = px + dx[i], ny = py + dy[i];
            if(f[ny][nx]!=1 and !is_out(nx,ny) and d[ny][nx]>=INF) {
                d[ny][nx] = d[py][px] + 1;
                if(nx==gx and ny==gy) return d[gy][gx];
                q.push(mp(nx,ny));
            }
        }
    }

    return d[gy][gx];
}

int main() {
    mset(f,0);
    cin>>r>>c>>sy>>sx>>gy>>gx;
    --sy; --sx; --gy; --gx;
    rep(i,r) rep(j,c){
        char c; cin>>c;
        if(c == '#') f[i][j] = 1;
    }

    cout << bfs() << endl;

    return 0;
}
