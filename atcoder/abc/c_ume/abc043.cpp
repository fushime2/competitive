#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int main() {
    int n;
    cin >> n;
    vi a(n);
    for(int& i : a) cin >> i;

    int ans = 114514810;
    FOR(y, -100, 101) {
        int cost = 0;
        for(auto& i : a) cost += (i - y) * (i - y);
        ans = min(ans, cost);
    }

    cout << ans << endl;

    return 0;
}
