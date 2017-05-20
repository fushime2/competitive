#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define ZERO(a) memset(a,0,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back

int n;
int a[100020];

int calc(int p) {
    int ret = 0;
    int l=p, r=p;
    while(1<=l and r<=n) {
        if(a[l] != a[r]) return ret;
        int cnt=0, t=a[l];
        if(l==r) cnt = -1;

        while(1<=l and a[l]==t) l--, cnt++;
        while(r<=n and a[r]==t) r++, cnt++;
        if(cnt >= 4) ret += cnt;
    }
    return ret;
}

int main() {
    while(cin>>n && n) {
        ZERO(a);
        FOR(i,1,n+1) scanf("%d", a[i]); // 1-indexed

        int cnt = 0;
        FOR(pos, 1, n+1) {
            int t = a[pos];
            FOR(color, 1, 4) {
                if(color == a[pos]) continue;
                a[pos] = color;
                cnt = max(cnt, calc(pos));
            }
            a[pos]; = t;
        }
        int ans = n - cnt;
        cout << ans << "\n";
    }

    return 0;
}
