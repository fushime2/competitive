#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define mset(a,x) memset(a,x,sizeof(a))
 
int h,w,t;
int s,g;
vector<string> f;
int dx[]={1,0,-1,0}, dy[]={0,1,0,-1};
 
bool is_out(int x, int y){
    return x<0 or y<0 or x>=w or y>=h;
}
 
long long d[120][120];
bool wf(int time){
    int n = h * w;
    mset(d,0);
    rep(i,n) rep(j,n) if(i!=j) d[i][j] = 1145141919;
 
    rep(y,h) rep(x,w){
        rep(i,4){
            int nx=x+dx[i], ny=y+dy[i];
            if(is_out(nx,ny)) continue;
            d[y*w+x][ny*w+nx] = (f[ny][nx]=='#' ? time : 1);
        }
    }
 
    rep(k,n) rep(i,n) rep(j,n){
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    }
 
    return d[s][g] <= t; // saitan
}
 
int main() {
    cin >> h >> w >> t;
    f.resize(h);
    rep(i,h) {
        cin >> f[i];
        rep(j,w) {
            if(f[i][j]=='S') s = i*w + j;
            if(f[i][j]=='G') g = i*w + j;
        }
    }
 
    int l = 1, r = t;
    while(r - l > 1){
        int mid = (r + l) / 2;
        if(wf(mid)) l = mid;
        else r = mid;
    }
 
    cout << l << "\n";
 
    return 0;
}
