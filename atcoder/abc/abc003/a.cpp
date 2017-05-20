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
#define SYAMU(ary) memset(ary,0,sizeof(ary))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair

int main() {
    int n;
    cin >> n;

    double ans = 0;
    FOR(i,1,n+1) {
        ans += 1.0 * i * 10000 / n;
    }

    cout << ans << "\n";

    return 0;
}
