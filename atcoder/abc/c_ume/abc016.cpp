#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int d[11][11];

int main() {
    rep(i,11) rep(j,11) if(i!=j) d[i][j] = 114514;
    int n, m;
    cin >> n >> m;
    rep(i,m){
        int a, b;
        cin >> a >> b;
        --a; --b;
        d[a][b] = d[b][a] = 1;
    }

    rep(k,n) rep(i,n) rep(j,n) d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

    rep(i,n){
        int count = 0;
        rep(j,n){
            if(i!=j and d[i][j] == 2) ++count;
        }
        cout << count << "\n";
    }


    return 0;
}
