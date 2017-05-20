#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define pb push_back

ll N,L;
vector<ll> a;

void solve() {
    a.clear();
    rep(i,N) {
        int aa; scanf("%d",&aa);
        a.pb((ll)aa);
    }

    int p = -1;
    rep(i,N-1) if(a[i]+a[i+1] >= L) {
        p = i;
    }
    if(p == -1) {
        cout << "Impossible" << "\n";
        return ;
    }

    cout << "Possible" << "\n";
    rep(i,p) cout << i+1 << "\n";
    for(int i=N-1; i>p; --i) cout << i << "\n";
}

int main() {
    while(cin>>N>>L) solve();
    return 0;
}
