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

int n, k;
vector<int> r1;

int main() {
    cin >> n >> k;
    r1.resize(n);
    for(int& i : r1) cin >> i;
    sort(ALL(r1));

    double c1 = 0;
    FOR(i, n-k, n-k+k){
        c1 = (c1 + r1[i]) / 2.0;
    }


    printf("%.10f\n", c1);

    return 0;
}
