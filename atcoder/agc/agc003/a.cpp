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

void solve(string s) {
    int n = s.size();
    bool u=0, d=0, l=0, r=0;
    rep(i,n) {
        if(s[i]=='N') u=1;
        if(s[i]=='S') d=1;
        if(s[i]=='E') r=1;
        if(s[i]=='W') l=1;
    }

    if(u and d and r and l) {
        puts("Yes");
    } else if(u and d) {
        if(r or l) puts("No");
        else puts("Yes");
    } else if(r and l) {
        if(u or d) puts("No");
        else puts("Yes");
    } else {
        puts("No");
    }

    return ;
}

int main() {
    string s;
    while(cin>>s) solve(s);

    return 0;
}
