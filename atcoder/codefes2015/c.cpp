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
#define F first
#define S second

void solve(int n, int t) {
    vector<int> a(n), b(n), c(n);

    int suma=0, sumb=0;
    rep(i,n) {
        scanf("%d%d", &a[i],&b[i]);
        suma += a[i];
        sumb += b[i];
        c[i] = a[i] - b[i];
    }
    if(sumb > t) {
        puts("-1"); return ;
    }

    sort(RALL(c));
    int cnt=0;
    rep(i,n+1) {
        if(sumb > t) break;
        sumb += c[i];
        cnt++;
    }
    cout << n - cnt << "\n";
    return ;
}

int main() {
    int n, t;
    while(cin>>n>>t) solve(n,t);

    return 0;
}
