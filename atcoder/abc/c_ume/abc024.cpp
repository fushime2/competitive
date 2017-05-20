#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define mp make_pair
#define fst first
#define scd second

int n, d, k;
vector<P> v;

int main() {
    cin >> n >> d >> k;
    v.resize(d);
    rep(i,d){
        int l,r;
        scanf("%d%d",&l,&r);
        v[i] = mp(l,r);
    }

    rep(i,k){
        int s, t;
        scanf("%d%d",&s,&t);
        int l = s, r = s;
        rep(j,d){
            if(v[j].fst <= l and l <= v[j].scd) l = min(l, v[j].fst);
            if(v[j].fst <= r and r <= v[j].scd) r = max(r, v[j].scd);
            if(l <= t and t <= r){
                cout << j+1 << "\n";
                break;
            }
        }
    }

    return 0;
}
