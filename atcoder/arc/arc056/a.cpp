#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

ll a,b,k,l;

int main() {
    cin>>a>>b>>k>>l;
    cout << min((k/l)*b+(k%l)*a, (k/l+1)*b) << endl;

    return 0;
}
