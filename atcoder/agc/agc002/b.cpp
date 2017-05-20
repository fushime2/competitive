#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vint;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define ZERO(a) memset(a,0,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair

ll n,m;
bool p[114514];

void solve() {
    ZERO(p);
    p[0] = true;
    vector<int> box(n,1);

    rep(i,m) {
        int x, y; scanf("%d%d",&x,&y);
        --x; --y;
        if(p[x]) p[y] = true;
        if(box[x] == 1) p[x] = false;
        box[x]--; box[y]++;
    }

    ll ans = 0;
    rep(i,n) ans += p[i];
    cout << ans << "\n";
}

int main() {
    while(cin>>n>>m) solve();
    return 0;
}
