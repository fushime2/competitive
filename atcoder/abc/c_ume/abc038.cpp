#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int main() {
    int n;
    cin >> n;
    vi a(n+5, -1);
    rep(i,n) scanf("%d", &a[i]);

    int l=0, r=0;
    ll ans = 0;
    while(r < n){
        while(r < n and a[r] < a[r+1]) ++r;
        ll m = r - l + 1;
        ans += (m * (m+1)) / 2;
        ++r;
        l = r;
    }

    cout << ans << endl;

    return 0;
}
