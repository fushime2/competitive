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

int n;
vector<int> c;

int main() {
    cin >> n;
    c.resize(n);
    for(int& i : c) cin >> i;

    sort(ALL(c));
    int omote = 0;
    int cnt = 0;
    do{
        ++cnt;
        vector<bool> p(n,1);
        rep(i,n){
            FOR(j,i+1,n){
                if(c[j] % c[i] == 0) p[j] = 1 - p[j];
            }
        }
        rep(i,n) omote += p[i];
    } while (next_permutation(ALL(c)));

    double res = 1.0 * omote / cnt;
    printf("%.15lf\n", res);

    return 0;
}
