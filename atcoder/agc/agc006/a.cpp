#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int n;
string s,t;

void solve(){
    cin>>s>>t;
    vector<string> v;
    v.pb(s);
    rep(i,n){
        v.pb(s + t.substr(i,n-i));
    }

    int ans = 114514;
    for(auto& a : v) {
        int m = a.size();
        if(a.substr(0,n)==s and a.substr(m-n,n)==t) ans = min(ans, m);
    }
    cout<<ans<<"\n";
}

int main() {
    while(cin>>n) solve();

    return 0;
}
