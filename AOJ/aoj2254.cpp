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

int n;
int t[20][20];

void solve(){
    vector<ll> sum(n+2, 0);
    FOR(x,1,n+1){
        ll s = 0;
        rep(y,n) s += t[y][x];
        sum[x] = s;
    }
}

int main() {
    while(cin>>n, n){
        mset(t, 0);
        rep(y,n) rep(x,n+1){
            int in; cin>>in;
            t[y][x] = in;
        }
        solve();
    }

    return 0;
}
