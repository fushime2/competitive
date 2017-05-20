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

int n;
int a[100010];

void solve() {
    ZERO(a);
    rep(i,n) scanf("%d", a+i);
    ll ans = 0;
    int p = 0;
    rep(i,n) {
        if(p == 0) {
            ans += a[i] / 2;
            p = a[i] % 2;
        } else {
            ans += (a[i] + p) / 2;
            p = (p + a[i]) % 2;
        }
    }
    cout << ans << "\n";
}

int main() {
    while(cin>>n) solve();

    return 0;
}
