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
#define vi vector<int>
#define pb push_back
#define mp make_pair

int t[10][10];
int n, k;

bool dfs(int s, int d){
    if(d == n-1) return s == 0;
    rep(i,k){
        if(dfs(s xor t[d+1][i], d+1)) return true;
    }
    return false;
}

int main() {
    cin >> n >> k;
    rep(y,n) rep(x,k) cin >> t[y][x];

    bool f = false;
    rep(i,k) if(dfs(t[0][i], 0)) f = true;
    cout << (f ? "Found" : "Nothing") << endl;

    return 0;
}
