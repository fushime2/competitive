#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
 
ll r,n,m;
 
void solve(){
    double d = 2.0 * r / n;
    double res = 0;
    FOR(i,1,n+m-1 + 1) {
        int j = i-m;
        double a = r - i*d;
        double b = r - j*d;
        double l1 = 2.0 * sqrt(max(0.0, r*r - a*a));
        double l2 = 2.0 * sqrt(max(0.0, r*r - b*b));
        res += max(l1,l2);
    }
    printf("%.10lf\n", res);
}
 
int main() {
    while(cin>>r>>n>>m) solve();
 
    return 0;
}
