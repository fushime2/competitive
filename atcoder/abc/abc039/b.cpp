#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ll x; cin>>x;
    for(ll i=0; i*i*i*i <= x; i++) {
        if(i*i*i*i == x){
            cout << i << "\n";
            break;
        }
    }

    return 0;
}
