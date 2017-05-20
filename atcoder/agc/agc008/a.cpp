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
#define OUT(x) cout<<(x)<<"\n"
#define FASTIO cin.tie(0),ios::sync_with_stdio(0)
#define pb push_back
#define mp make_pair

int x, y;

int main() {
    cin>>x>>y;
    if(x == y){ OUT(0); return 0; }

    int xx = -x, yy = -y;
    int ans = 1<<30;

    if(x <= y)
        ans = min(ans, y - x);
    if(xx <= y)
        ans = min(ans, y - xx + 1);
    if(x <= yy)
        ans = min(ans, yy - x + 1);
    if(xx <= yy)
        ans = min(ans, yy - xx + 2);

    OUT(ans);

    return 0;
}
