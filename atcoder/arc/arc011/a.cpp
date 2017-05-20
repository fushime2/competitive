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
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define OUT(x) cout<<(x)<<"\n"
#define pb push_back
#define mp make_pair


int main() {
    int l,x,y,s,d;
    cin>>l>>x>>y>>s>>d;

    int k = 0, kr = 0;
    if (s < d) {
        k = d - s;
        kr = l - (d - s);
    }
    else {
        k = d + l - s;
        kr = s - d;
    }

    double res = 0;
    if (x < y) {
        double t1, t2;
        t1 = 1.0 * k / (y + x);
        t2 = 1.0 * kr / (y - x);
        res = min(t1, t2);
    }
    else {
        res = 1.0 * k / (y + x);
    }

    printf("%.10f\n", res);

    return 0;
}
