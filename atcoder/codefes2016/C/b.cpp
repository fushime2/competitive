#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
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

int k,t;

void solve() {
    vector<int> a(t,0);
    rep(i,t) scanf("%d",&a[i]);
    sort(ALL(a));

    int mm = a[t-1];
    rep(i,t-1) mm -= a[i];

    cout << max(0, mm-1) << "\n";
}

int main() {
    while(cin>>k>>t) solve();

    return 0;
}
