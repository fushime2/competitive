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

ll a,b,x;

int main() {
    cin>>a>>b>>x;

    if(a==0 and b==0){
        puts("1");
        return 0;
    } else if(a==0) {
        ll c = b / x;
        cout<<c+1<<endl;
        return 0;
    }

    ll c = b / x;
    ll d = (a-1) / x;
    ll res = c - d;

    cout << res << "\n";


    return 0;
}
