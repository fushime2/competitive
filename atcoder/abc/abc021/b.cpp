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

int n,a,b,k;

int main() {
    cin>>n>>a>>b>>k;
    vector<bool> vis(n+5, 0);
    vis[a] = vis[b] = 1;

    bool ok = true;
    rep(i,k){
        int p; cin>>p;
        if(vis[p]) ok = false;
        vis[p] = true;
    }

    cout << (ok ? "YES" : "NO") << endl;


    return 0;
}
