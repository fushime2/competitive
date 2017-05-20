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
#define MINUS(a) memset(a,-1,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int main() {
    int n; cin>>n;
    vector<int> times;
    rep(q,n) {
        int h1,m1,s1,h2,m2,s2;
        scanf("%d:%d:%d",&h1,&m1,&s1)
        scanf("%d:%d:%d",&h2,&m2,&s2)
        int t1 = s1 + 60*m1 + 3600*h1;
        int t2 = s2 + 60*m2 + 3600*h2;
        int t = t2 - t1;
        times.pb(t);
    }
    sort(ALL(times));

    

    return 0;
}
