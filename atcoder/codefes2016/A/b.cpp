#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define ZERO(a) memset(a,0,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define vint vector<int>

int link[100010];

void solve(int n) {
    ZERO(link);
    ll ans = 0;
    rep(i,n) {
        int a; scanf("%d",&a);
        --a;
        link[i] = a;
    }

    rep(i,n) {
        if(link[link[i]] == i) ++ans;
    }
    cout<<ans / 2<<"\n";
}

int main() {
    int n;
    while(cin>>n) solve(n);

    return 0;
}
