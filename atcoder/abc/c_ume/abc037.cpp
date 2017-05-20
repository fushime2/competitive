#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> c(n*2, 0);
    rep(i, n-k+1) {
        c[i]++; c[i+k]--;
    }
    rep(i,n-1) c[i+1] += c[i];

    long long ans = 0;
    rep(i,n){
        int a;
        scanf("%d",&a);
        ans += a * c[i];
    }
    rep(i,n){
        cout<<c[i]<<endl;
    }
    cout << ans << endl;

    return 0;
}
