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
#define vint vector<int>

void solve(string s, ll k) {
    int n = s.size();
    rep(i,n) {
        int dif = 26 - (s[i] - 'a');
        dif %= 26;
        //dbg(dif);
        if(k - dif >= 0) {
            s[i] = 'a';
            k -= dif;
        }
    }
    //dbg(s); dbg(k);

    s[n-1] += k%26;
    cout << s << "\n";
}

int main() {
    string s;
    ll k;
    while(cin>>s>>k) {
        solve(s,k);
    }

    return 0;
}
