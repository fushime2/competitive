#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
const double EPS = 1e-7;

int a,b,c,d,t,v,n;

double dist2(int x1, int y1, int x2, int y2){
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main() {
    cin>>a>>b>>c>>d>>t>>v>>n;
    int maxmove = t * v;
    
    bool ok = false;
    rep(i,n){
        int x, y; cin >> x >> y;
        double d1 = dist2(x,y,a,b);
        double d2 = dist2(x,y,c,d);
        if(d1 + d2 < maxmove + EPS) ok = true;
    }

    cout << (ok ? "YES" : "NO") << endl;

    return 0;
}
