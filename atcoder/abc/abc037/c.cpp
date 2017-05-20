#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define ZERO(a) memset(a,0,sizeof(a))
#define dbg(x) cout<<#x<<": "<<x<<endl;
#define pb push_back

int n, k;
int a[100020];
ll s[100020];

void init() {
    ZERO(a); ZERO(s);
}

int main() {
    while(cin>>n>>k) {
        init();
        rep(i,n) scanf("%d", a+i);

        s[0] = 0;
        rep(i,n) s[i+1] = s[i] + a[i];

        ll ans = 0;
        for(int i=0; i+k <= n; i++) {
            ans += s[i+k] - s[i];
        }

        cout << ans << "\n";
    }

    return 0;
}
