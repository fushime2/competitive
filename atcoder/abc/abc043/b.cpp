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
    string s;
    while(cin>>s) {
        string t = "";
        for(auto& i : s) {
            if(i=='0') t+='0';
            if(i=='1') t+='1';
            if(i=='B') {
                string tt = "";
                rep(j, SZ(t)-1) tt+=t[j];
                t = tt;
            }
        }
        cout << t << "\n";
    }


    return 0;
}
