#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int m = n-1;

    ll tot = 0;
    rep(mask, 1<<m){
        ll sum = 0, cur = 0;
        rep(i,n){
            if(mask & (1<<(i-1))) {
                sum += cur;
                cur = 0;
            }
            cur = cur * 10 + (s[i] - '0');
        }
        sum += cur;
        tot += sum;
    }

    cout << tot << endl;

    return 0;
}
