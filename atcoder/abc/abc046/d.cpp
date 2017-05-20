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
    string t = "";
    rep(i,s.size()) t += (i%2==0 ? 'g' : 'p');

    int l=0, w=0;
    rep(i,s.size()) {
        if(s[i] == 'g' and t[i] == 'p') w++;
        else if(s[i] == 'p' and t[i] == 'g') l++;
    }

    cout << w-l << endl;

    return 0;
}
