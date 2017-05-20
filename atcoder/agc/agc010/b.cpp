#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define OUT(x) cout<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int n;

int main() {
    cin >> n;
    vector<ll> a(n+2);
    ll tot = 0;
    rep(i,n){
        scanf("%lld", &a[i]);
        tot += a[i];
    }

    ll lim = n * (n+1) / 2;
    ll cnt = tot / lim;


    return 0;
}