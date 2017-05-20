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

string s;
int n;

int main() {
    cin>>s>>n;

    rep(i,n) {
        int l,r; cin>>l>>r;
        --l; --r;
        string t = "";
        rep(i,l) t += s[i];
        FOR(i,l,r+1) t += s[r-l+i];
        FOR(i,r+1,n) t += s[i];
        s = t;
    }

    cout << s << endl;

    return 0;
}
