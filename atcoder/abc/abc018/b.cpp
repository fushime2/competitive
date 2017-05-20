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
#define ZERO(a) memset(a,0,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair

int main() {
    string s;
    int n;
    cin>>s>>n;
    rep(i,n) {
        int l,r; cin>>l>>r;
        l--; r--;
        FOR(j, l, (l+r)/2 + 1) swap(s[i], s[l + r - j]);
    }

    cout << s << "\n";

    return 0;
}