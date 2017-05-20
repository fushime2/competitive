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

int x[3];
int y[3];

int main() {
    rep(i,3) cin>>x[i]>>y[i];

    int difx = x[0] - 0;
    int dify = y[0] - 0;

    rep(i,3) {
        x[i] -= difx;
        y[i] -= dify;
    }

    double s = abs(((x[1] * y[2]) - (x[2] * y[1]))) / 2.0;
    printf("%.10f\n", s);


    return 0;
}
