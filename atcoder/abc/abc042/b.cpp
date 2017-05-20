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

int n,l;
vector<string> v;

int main() {
    cin>>n>>l;

    string ans = "";
    rep(i,n) {
        string s; cin >> s;
        v.pb(s);
    }
    sort(ALL(v));
    for(auto& i : v) {
        ans += i;
    }

    cout << ans << endl;


    return 0;
}
