#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);++i)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define vint vector<int>
#define pb push_back
#define eb emplace_back

int main() {
    ll a, k;
    const ll N = 2e12;

    while(cin>>a>>k) {
        if(k == 0) {
            cout << N - a << endl;
            return 0;
        }

        ll day = 0;
        while(a < N) {
            ll t = a;
            a += 1 + k*t;
            day++;
        }

        cout << day << endl;
    }

    return 0;
}
