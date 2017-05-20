#include <cstdio>
#include <iostream>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

const int MOD = 1e9 + 7;
int h, w;
int a[1010][1010];
int dp[1010][1010];
int dx[]={1,0,-1,0}, dy[]={0,1,0,-1};

bool is_out(int x, int y) {
    return x<0 or w<=x or y<0 or h<=y;
}

ll rec(int x, int y) {
    ll ret = dp[y][x];
    if(ret) return ret;

    ret = 1;
    rep(k,4) {
        int nx = x+dx[k], ny = y+dy[k];
        if(is_out(nx,ny)) continue;
        if(a[y][x] >= a[ny][nx]) continue;
        ret += rec(nx, ny);
        dp[y][x] = ret % MOD;
    }
    return ret % MOD;
}

int main() {
    scanf("%d%d",&h,&w);
    rep(y,h) rep(x,w) scanf("%d", &a[y][x]);

    ll ans = 0;
    rep(y,h) rep(x,w) {
        ans += rec(x,y);
        ans %= MOD;
    }

    cout << ans << "\n";

    return 0;
}
