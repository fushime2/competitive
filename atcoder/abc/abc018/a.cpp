#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vint;
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

int main() {
    vint a(3),b(3);
    rep(i,3) cin>>a[i];
    b = a;

    sort(RALL(a));
    rep(i,3) {
        rep(j,3) {
            if(b[i]==a[j]) cout<<j+1<<endl;
        }
    }

    


    return 0;
}
