#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
#define pb push_back
#define INF 114514810

int n, k;
// vector<vector<edge> > G{120];
int dist[120];
int cost[120][120];

void dikstr(int s) {
    priority_queue<P, vector<P>, greater<P> > que;
    fill(dist, dist + n, INF);
    dist[s] = 0;
    que.push(P(0, s));

    while(!que.empty()) {
        P p = que.top(); que.pop();
        int v = p.second; // 頂点番号
        if(dist[v] < p.first) continue;

        rep(i,n) {
            if(dist[i] > p.first + cost[p.second][i]) {
                dist[i] = p.first + cost[p.second][i];
                que.push(P(dist[i], i));
            }
        }
    }
}


int main(void) {
    while(1) {
        scanf("%d %d", &n, &k);
        if(n == 0 and k == 0) break;
        rep(i,n) rep(j,n) cost[i][j] = INF;

        rep(i,k) {
            int f,a,b,c,d,e;
            scanf("%d", &f);
            if(f == 0) {
                scanf("%d%d", &a, &b);
                a--; b--;
                dikstr(a);
                if(dist[b] >= INF) puts("-1");
                else
                    cout << dist[b] << "\n";
            } else if(f == 1) {
                scanf("%d%d%d", &c, &d, &e);
                c--; d--;
                cost[c][d] = cost[d][c] = min(cost[c][d], e);
            }
        }

        /* debug
        rep(i,n) rep(j,n) {
            printf("dist[%d][%d] = %d\n", i, j, dist[i][j]);
        }
        */
    }

    return 0;
}
