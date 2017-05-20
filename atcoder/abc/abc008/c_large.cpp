#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int main() {
    int n; cin>>n;
    vector<int> c(n);
    for(int& i : c) cin>>i;

    double res = 0;
    rep(i,n) {
        int s = 0; // coin[i] の約数の数
        rep(j,n){
            if(i == j) continue;
            s += (c[i] % c[j] == 0);
        }

        if(s % 2 == 0){
            // 偶数
            // 
            res += (s+2.0) / (2*s + 2);
        } else {
            res += 0.5;
        }
    }

    printf("%.10lf\n", res);

    return 0;
}
