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

int n;

int main() {
    cin>>n;

    vector<int> span(2410,0);
    rep(i,n){
        int s, e;
        scanf("%d-%d", &s, &e);
        s = s - s%10;
        e = e - e%10 + 5;
        dbg(s); dbg(e);
        span[s]++; span[e+1]--;
    }

    FOR(i,1,2401){
        span[i] += span[i-1];
    }

    int l=0, r=0;
    while(1){
        while(!span[l] or l <= 2400) l++;
        r = l;
        while(span[r] or r <= 2400) r++;
        printf("%d-%d", l, r-1);
        l = r;
        if(l > 2400) break;
    }

    return 0;
}
