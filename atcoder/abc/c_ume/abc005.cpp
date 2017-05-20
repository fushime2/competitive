#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define mset(a,x) memset(a,x,sizeof(a))

int t, n, m;
bool sold[114];

int main() {
    mset(sold, false);
    cin >> t >> n;
    vector<int> a(n);
    for(int& i : a) cin >> i;
    cin >> m;
    vector<int> b(m);
    for(int& i : b) cin >> i;

    rep(i,m) {
        bool ok = false;
        rep(j,n){
            if(!sold[j] and a[j] <= b[i] and b[i] - a[j] <= t) {
                sold[j] = true;
                ok = true;
                break;
            }
        }
        if(!ok) {
            puts("no");
            return 0;
        }
    }

    puts("yes");

    return 0;
}
