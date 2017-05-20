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

const int MOD = 100000;
ll a[120][120];

void solve(int w, int h) {
    // a[i][j] := (i,j) でのけいろ
    rep(i,h) rep(j,w) {
        if(i == 0 or j == 0) {
            a[i][j] = 1;
        } else {
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }

    cout << a[h-1][w-1] % MOD << "\n";
}

int main() {
    while(1){
        int w, h;
        cin >> w >> h;
        if(w==0 and h==0) break;
        solve(w, h);
    }
    return 0;
}
