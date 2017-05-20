#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
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
vector<int> d;

bool ng(int x){
    while(x > 0){
        int a = x % 10;
        rep(i,k) if(a == d[i]) return true;
        x /= 10;
    }
    return false;
}

int main() {
    cin >> n >> k;
    d.resize(k);
    rep(i,k) cin >> d[i];

    for(int i=n; ; ++i) if(!ng(i)) {
        cout << i << endl;
        return 0;
    }

    return 0;
}
