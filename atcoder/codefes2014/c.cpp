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


void solve(ll a, ll b) {
    --a;
    ll c = (b / 4) - (b / 100) + (b / 400);
    ll d = (a / 4) - (a / 100) + (a / 400);
    cout << c - d << "\n";
}

int main() {
    ll a,b;
    while(cin>>a>>b) {
        solve(a,b);
    }

    return 0;
}
