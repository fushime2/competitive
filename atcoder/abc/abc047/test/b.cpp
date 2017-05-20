#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int w,h,n;
int d[120][120];

void solve(){
    rep(i,n){
        int x,y,a; cin>>x>>y>>a;
        if(a == 1){
            rep(j,h) rep(i,x) d[j][i] = 0;
        } else if(a == 2){
            rep(j,h) FOR(i,x,w) d[j][i] = 0;
        } else if(a == 3){
            rep(i,w) rep(j,y) d[j][i] = 0;
        } else {
            rep(i,w) FOR(j,y,h) d[j][i] = 0;
        }
    }

    int res = 0;
    rep(y,h) rep(x,w) res += d[y][x];
    cout << res << "\n";
}

int main() {
    while(cin>>w>>h>>n){
        mset(d,0);
        rep(y,h) rep(x,w) d[y][x] = 1;
        solve();
    }


    return 0;
}
