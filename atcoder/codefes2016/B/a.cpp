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
#define vint vector<int>

int main() {
    string s;cin>>s;
    string t = "CODEFESTIVAL2016";
    int ans=0;
    rep(i,16) {
        if(s[i] != t[i]) ans++;
    }
    cout<<ans<<"\n";

    return 0;
}