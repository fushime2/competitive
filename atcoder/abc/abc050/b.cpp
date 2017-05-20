#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define OUT(x) cout<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int main() {
    int n, m, tot = 0;
    cin >> n;
    vi t(n+5);
    rep(i,n){
        cin >> t[i];
        tot += t[i];
    }

    cin >> m;
    rep(i,m){
        int p,x;
        cin >> p >> x;
        --p;
        OUT(tot - t[p] + x);
    }

    return 0;
}
