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
#define SYAMU(ary) memset(ary,0,sizeof(ary))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair

int main() {
    vint v;
    rep(i,3) {
        int a;cin>>a;v.pb(a);
    }
    sort(ALL(v));
    if(v[0]==5 and v[1]==5 and v[2]==7)
        puts("YES");
    else
        puts("NO");


    return 0;
}
