#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ZERO(a) memset(a,0,sizeof(a))
#define pb push_back
#define mp make_pair
#define F first
#define S second

const int M = 1e6 + 10;
bool px[M], py[M];
vector<P> tg, stars; // (x,y)

void init(void) {
    ZERO(px); ZERO(py); tg.clear(); stars.clear();
}

bool OK(int dx, int dy) {
    for(auto& t : tg) {
        if(t.F+dx > 1e6 or t.S+dy > 1e6) return false;
        if(!px[t.F + dx] or !py[t.S + dy]) return false;
    }
    return true;
}

int main() {
    int m, n;
    while(cin>>m && m) {
        init();
        rep(i,m) {
            int x,y; scanf("%d%d",&x,&y);
            tg.pb(mp(x,y));
        }
        cin >> n;
        rep(i,n) {
            int x,y; scanf("%d%d",&x,&y);
            stars.pb(mp(x,y));
            px[x] = py[y] = true;
        }

        for(auto& star : stars) {
            int diffx = star.F - tg[0].F;
            int diffy = star.S - tg[0].S;

            if(OK(diffx, diffy)) {
                printf("%d %d\n", diffx, diffy);
                goto out;
            }
        }
out:
        m += 0;
    }

    return 0;
}
