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
#define vi vector<int>
#define pb push_back
#define mp make_pair

int n;

int main() {
    cin >> n;
    vi cnt(n,0), b(n,0);
    rep(i,n-1){
        cin >> b[i+1];
        --b[i+1];
        ++cnt[b[i+1]];
    }

    vi point(n,0);
    for(int i=n-1; i>=0; --i){
        if(cnt[i] == 0) {
            point[i] = 1;
            continue;
        }
        int ma=1, mi=114514810;
        FOR(j,1,n){
            if(b[j] == i){
                ma = max(ma, point[j]);
                mi = min(mi, point[j]);
            }
        }
        point[i] = ma + mi + 1;
    }

    cout << point[0] << endl;

    return 0;
}
