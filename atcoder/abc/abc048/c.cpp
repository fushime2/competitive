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
#define pb push_back
#define mp make_pair

ll n;
ll x;
vector<int> a;

int main() {
    cin>>n>>x;
    a.resize(n);
    rep(i,n) scanf("%d", &a[i]);
    
    ll ans = 0;
    rep(i,n-1){
        ll sum = a[i] + a[i+1];
        if(sum <= x) continue;

        ll sub = sum - x;
        if(sub <= a[i+1]) {
            a[i+1] -= sub;
        }
        else {
            a[i+1] = 0;
            sub -= a[i+1];
            a[i] -= sub;
        }
        ans += sub;
    }

    cout << ans << endl;

    return 0;
}
