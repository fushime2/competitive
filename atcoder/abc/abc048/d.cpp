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

string s;

void solve(){
    int n = s.size();
    if(s[0] == s[n-1]) {
        cout << (n % 2 == 0 ? "First" : "Second") << "\n";
        return ;
    }

    cout << (n % 2 == 1 ? "First" : "Second") << "\n";

}

int main() {
    while(cin >> s) solve();
    return 0;
}
