#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define vint vector<int>
#define pb push_back
#define eb emplace_back

int n,k;
int t[10][10];

bool dfs(int a, int b) {
    if(a == n) return (b == 0);
    rep(i,k) {
        if(dfs(a+1, b xor t[a][i])) return true;
    }
    return false;
}


int main() {
    cin >> n >> k;
    rep(i,n) rep(j,k) cin >> t[i][j];

    if(dfs(0,0))
        cout << "Found" << endl;
    else
        cout << "Nothing" << endl;

    return 0;
}
