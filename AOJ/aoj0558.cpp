#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define F first
#define S second

const int M = 1024;
const int INF = 114514810;
int h,w,n;
char f[M][M];
int d[M][M];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
vector<P> cheese(12);

void init() {
    rep(y,M) rep(x,M) f[y][x] = '$';
    cheese.clear();
}

bool ng(int x, int y) {
    return (x<0 or w<=x or y<0 or h<=y);
}

int bfs(P s, P g) {
    int gx=g.F, gy=g.S;
    queue<P> Q;
    rep(y,M) rep(x,M) d[y][x] = INF;
    Q.push(s);
    d[s.S][s.F] = 0;

    while(Q.size()) {
        P p = Q.front(); Q.pop();
        if(p.F==gx and p.S==gy) break;

        rep(i,4) {
            int nx = p.F + dx[i], ny = p.S + dy[i];
            if(ng(nx,ny) or f[ny][nx]=='X' or d[ny][nx]<INF) continue;
            d[ny][nx] = d[p.S][p.F] + 1;
            Q.push(P(nx,ny));
        }
    }

    return d[gy][gx];
}

int main() {
    while(cin>>h>>w>>n) {
        init();
        rep(y,h) rep(x,w) {
            cin >> f[y][x];
            char c = f[y][x];
            if(c!='.' and c!='S' and c!='X') cheese[c-'0'] = make_pair(x,y);
            if(c == 'S') cheese[0] = make_pair(x,y);
        }

        int ans = 0;
        rep(i,n) ans += bfs(cheese[i], cheese[i+1]);
        cout << ans << endl;
    }

    return 0;
}
