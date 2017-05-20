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

int n,x;

void solve(){
    int tg = n/2 + 1;
    
    if(tg != x){
        puts("No");
    } else {
        puts("Yes");
        rep(i,n) printf("%d\n", i+1);
    }
    return ;
}

int main() {
    while(cin>>n>>x) solve();

    return 0;
}
