// O(2^w * (h+w))
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define fst first
#define sec second

vector<pair<ll,ll> > cnt;
int f[10005][12];
int h, w;

void F(int mask){
    rep(i,w){
        if(mask & (1<<i)){
            rep(y,h) {
                f[y][i] = !f[y][i];
                if(f[y][i] == 0){
                    cnt[y].sec--; cnt[y].fst++;
                }else{
                    cnt[y].sec++; cnt[y].fst--;
                }
            }
        }
    }
}

void solve() {
    cnt.clear(); cnt.resize(h);
    rep(y,h) {
        int white=0, black=0;
        rep(x,w) {
            if(f[y][x] == 0) white++; else black++;
            cnt[y] = make_pair(white, black);
        }
    }

    ll ans = 0;
    rep(mask, 1<<w){
        F(mask);
        ll count = 0;
        rep(y,h) count += max(cnt[y].fst, cnt[y].sec);
        ans = max(ans, count);
        F(mask);
    }
    cout << ans << endl;
}

int main() {
    while(cin>>h>>w && h){
        memset(f, 0, sizeof(f));
        rep(y,h) rep(x,w) scanf("%d",&f[y][x]);
        solve();
    }
    return 0;
}
