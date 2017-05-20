#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) (int)(x).size()

void solve(int n, int k, int s) {
    vector<int> v(n);
    rep(i,n) v[i] = i+1;

    int ans = 0;
    rep(mask, 1<<n) {
        int sum = 0, cnt = 0;
        rep(i,n) if(mask&(1<<i)) {
            sum += i+1;
            ++cnt;
        }
        if(cnt == k and sum == s) ++ans;
    }

    cout << ans << "\n";
}

int main() {
    int n,k,s;
    while(cin>>n>>k>>s, n) solve(n,k,s);
    return 0;
}
