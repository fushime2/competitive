#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()

int n, q;

int main() {
    cin>>n>>q;
    vector<int> a(n,0);
    rep(i,q) {
        int l,r,t;
        cin>>l>>r>>t;
        --l; --r;
        FOR(j,l,r+1) a[j] = t;
    }

    rep(i,n) cout << a[i] << "\n";

    return 0;
}
