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

int main() {
    int n;
    cin >> n;
    int tot = 0;
    FOR(i,1,10) FOR(j,1,10) tot += i*j;

    int lose = tot - n;
    FOR(i,1,10) FOR(j,1,10) {
        if(i * j == lose) cout << i << " x " << j << "\n";
    }

    return 0;
}
