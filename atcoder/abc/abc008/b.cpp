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

int main() {
    int n; cin>>n;
    vector<string> v;
    set<string> S;
    rep(i,n) {
        string s; cin>>s;
        v.pb(s);
        S.insert(s);
    }
    
    int ma = 0;
    string ans = "";
    for(auto& i : S) {
        int cnt = count(ALL(v),i);
        if(ma < cnt) {
            ma = cnt;
            ans = i;
        }
    }
    cout << ans << "\n";

    return 0;
}
