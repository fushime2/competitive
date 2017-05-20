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
    double m;

    while(cin>>m) {
        m /= 1000;
        if(m < 0.1) {
            puts("00");
        }
        else if(0.1<=m and m<=5) {
            if(m < 1.0) cout<<0<<m*10<<"\n";
            else cout<<m*10<<"\n";
        }
        else if(6<= m and m<=30) {
            cout<<m+50<<"\n";
        }
        else if(35<=m and m<=70) {
            cout<<(m-30)/5 + 80<<"\n";
        }
        else if(70 < m) {
            cout<<89<<"\n";
        }
    }

    return 0;
}
