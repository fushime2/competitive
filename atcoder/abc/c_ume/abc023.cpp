#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,(n))
#define OUT(x) cout<<(x)<<"\n";
#define mp make_pair

int main() {
    int r, c, k, n;
    cin>>r>>c>>k>>n;

    vector<pair<int,int>> point(n);
    vi cx(100010,0), cy(100010,0);
    rep(i,n){
        int x, y;
        scanf("%d%d",&y,&x);
        --x; --y;
        point[i] = mp(x,y);
        ++cx[x]; ++cy[y];
    }

    vi mx(100010,0), my(100010,0);
    rep(i, r) ++my[cy[i]];
    rep(i, c) ++mx[cx[i]];

    ll ans = 0;
    rep(i,k+1){
        ans += mx[i] * my[k-i];
    }

    for(auto& p : point){
        int x = p.first, y = p.second;
        if(cx[x] + cy[y] == k) --ans;
        else if(cx[x] + cy[y] == k+1) ++ans;
    }
    
    OUT(ans);

    return 0;
}
