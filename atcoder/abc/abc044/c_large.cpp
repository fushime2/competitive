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
#define MINUS(a) memset(a,-1,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair

int N, A;
vector<int> X;
ll dp[55][55];

void rec(int i, int s, int c) {
    if(!dp[i][s/c]) return dp[i][s/c];

    if(i == N) return dp[i][
}


int main() {
    MINUS(dp);
    cin >> N >> A;
    rep(i,N) {
        int x; scanf("%d",&x); X.pb(x);
    }
    sort(ALL(X));

    rep(i,55) dp[i][0] = 0;
    rec(0,0,0);
    

    return 0;
}
