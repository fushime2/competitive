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

int n;
int k;
vector<char> D(12);

bool OK(string s) {
    rep(i, SZ(s)) {
        rep(j,k) {
            if(s[i] == D[j]) return false;
        }
    }
    return true;
}

int main() {
    while(cin>>n>>k) {
        D.clear();
        rep(i,k) cin >> D[i];

        for(int i = n; ; ++i) {
            string s = to_string(i);
            if(OK(s)) {
                cout << i << "\n";
                goto koko;
            }
        }
koko:
        n += 0;
    }

    return 0;
}
