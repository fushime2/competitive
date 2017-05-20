#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
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
    string s; cin>>s;
    int n = s.size();
    bool C=0, F=0;
    rep(i,n) {
        if(!F and s[i] == 'C') C = true;
        if(C and s[i] == 'F') F = true;
    }

    if(C and F)
        puts("Yes");
    else
        puts("No");

    return 0;
}
