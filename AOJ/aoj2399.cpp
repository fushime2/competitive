#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define SZ(x) (int)(x).size()
#define pb push_back

typedef vector<int> vint;

bool search(vint v, int x) {
    for(auto& i : v) if(i == x) return true;
    return false;
}

bool OK(vint p, vint l) {
    if(SZ(p) < SZ(l)) return false;
    for(auto& li : l) {
        if(search(p, li)) continue;
        return false;
    }
    return true;
}

void solve(int n) {
    vector<vector<int>> ps;
    rep(i,n) {
        int m; cin>>m;
        vector<int> p(m);
        rep(i,m) cin>>p[i];
        ps.pb(p);
    }
    int k; cin>>k;
    vector<int> l(k);
    rep(i,k) cin>>l[i];

    int cnt=0, ans=0;
    rep(i,n) {
        if(OK(ps[i], l)) {
            cnt++;
            ans = i+1;
        }
    }
    cout << (cnt==1 ? ans : -1) << "\n";
}

int main() {
    for(int n; cin>>n && n; ) solve(n);
    return 0;
}
