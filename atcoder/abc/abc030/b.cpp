#include <iostream>
#include <cstdio>
#include <algorithm>
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

void solve(int h,int m) {
    h %= 12;
    int sec = h*60*60 + m*60;
    double r1 = sec * 360.0 / (12.0*60*60);
    sec = m*60;
    double r2 = sec * 360.0 / (60.0 * 60.0);
    double r = r1 - r2;
    if(r < 0) r *= -1;

    printf("%.10lf\n", min(r, 360-r));
    //dbg(r1); dbg(r2);
}

int main() {
    int h,m; cin>>h>>m;
    //while(cin>>h>>m) solve(h,m);
    solve(h,m);
    return 0;
}
