#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

typedef struct {
    int h,p,q;
} Bar;

void solve(int n,int m,int a) {
    vector<Bar> v(m);
    for(auto& i : v) cin>>i.h>>i.p>>i.q;

    rep(i,m) rep(j,m-1) if(v[j].h < v[j+1].h) swap(v[j],v[j+1]);

    for(auto& i : v) {
        if(i.p == a) a = i.q;
        else if(i.q == a) a = i.p;
    }

    cout << a << "\n";
}

int main() {
    int n,m,a;
    while(cin>>n>>m>>a && n) solve(n,m,a);
    return 0;
}
