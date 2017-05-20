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

int ctoi(char c) {
    return c - '0';
}

void solve(string a, int k) {
    bool num[10] = {0};
    vector<char> v;
    int n = a.size();
    set<char> S;
    for(auto& c : a) S.insert(c);
    for(int i=0; i<n or SZ(v)<k ; i++) {
        if(!num[a[i]-'0']) {
            num[a[i]-'0'] = true;
            v.pb(a[i]);
        }
    }

    if(SZ(S) == SZ(v)) {
        puts("0"); return ;
    }

    string ans = "";
    rep(i,n) {
        int mi = 12;
        char tmp;
        rep(j,SZ(v)) if(mi > abs(ctoi(a[i]) - ctoi(v[j]))) {
            mi = abs(ctoi(a[i]) - ctoi(v[j]));
            tmp = v[j];
        }
        ans += tmp;
    }
    cout << ans << "\n";
}

int main() {
    string a;
    int k;
    while(cin>>a>>k) {
        solve(a,k);
    }

    return 0;
}
