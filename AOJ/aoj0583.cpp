#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define vint vector<int>
#define pb push_back
#define eb emplace_back

int main() {
    int a[3], n;
    cin >> n;
    rep(i,n) cin >> a[i];

    if(n==2) {
        for(int i=1; i <= min(a[0],a[1]); i++)
            if(a[0] % i == 0 and a[1] % i == 0)
                cout << i << "\n";
    } else {
        for(int i=1; i <= min(a[0],min(a[1],a[2])); i++)
            if(a[0] % i == 0 and a[1] % i == 0 and a[2] % i == 0)
                cout << i << "\n";
    }


    return 0;
}
