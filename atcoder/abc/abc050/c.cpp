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

const int mod = 1e9 + 7;
int n;

int main() {
    FASTIO;
    cin >> n;
    vi cnt(n+5, 0);

    rep(i,n){
        int a; cin >> a;
        if((a == 0 and cnt[0]) or (n%2 == 0 and a%2 == 0)
                or (n%2 == 1 and a%2 == 1)){
            puts("0");
            return 0;
        }
        ++cnt[a];
    }

    bool f = true;
    ll res = 1;
    rep(i,n){
        if(n % 2 == 0) {
            if(cnt[i] and i % 2 == 0) f = false;
            if(i!=0 and i%2 == 1) res *= 2;
            res %= mod;
        }
        else{
            if(cnt[i] and i % 2 == 1 and i != 0) f = false;
            if(i == 0 and cnt[0] != 1) f = false;
            if(i!=0 and i%2 == 0) res *= 2;
            res %= mod;
        }
    }

    OUT(f ? res : 0);
    return 0;
}
