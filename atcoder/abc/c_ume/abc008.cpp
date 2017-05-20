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

int n;
vector<int> c(111,0);

int main() {
    cin >> n;
    rep(i,n) cin >> c[i];

    double res = 0;
    rep(i,n){
        int s = 0;
        rep(j,n){
            if(i != j and c[i] % c[j] == 0) ++s;
        }

        if(s % 2 == 0)
            res += 1.0 * (s+2) / (2*s + 2);
        else
            res += 0.5;
    }

    printf("%.10f\n", res);

    return 0;
}
