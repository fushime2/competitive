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
#define MINUS(a) memset(a,-1,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int W, H;

void solve(void) {
    rep(i, 2*H-1) {
        if((i&1) == 0) {
            rep(j,W-1) {
                int a;
                cin>>a;
                cout<<a;
                cout<<(j==W-2? "\n" : " ");
            }
        } else {
            rep(j,W) {
                int a;
                cin>>a;
                cout<<a;
                cout<<(j==W-1? "\n" : " ");
            }
        }
        puts("");
    }
    return ;
}

int main() {
    while(cin>>W>>H, W) solve();
    return 0;
}
