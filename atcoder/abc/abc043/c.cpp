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
vint a(110);
const int INF = 114514810;

int solve() {
    int ret = INF;
    for(int i=-100; i<=100; i++) {
        int cost = 0;
        rep(j,n) cost += (a[j] - i) * (a[j] - i);
        ret = min(ret, cost);
    }
    return ret;
}

int main() {
    while(cin>>n) {
        a.clear();
        rep(i,n) scanf("%d",&a[i]);
        int ans = solve();
        cout << ans << "\n";
    }


    return 0;
}
