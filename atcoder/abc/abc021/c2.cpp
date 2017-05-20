#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back

struct edge { int to, cost; };
const int mod = 1e9 + 7;
const int INF = 114514810;
int n, a, b, m;
int d[110];
vector<edge> G[110];
typedef pair<int,int> P;

void dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P>> que;
    fill(d, d+100, INF);
    d[s] = 0;
    que.push(P(0,s));

    while(que.size()){
        P p = que.top(); que.pop();
        int v = p.second;
        if(d[v] < p.first) continue;
        rep(i, G[v].size()){
            edge e = G[v][i];
            if(d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

int main() {
    cin>>n>>a>>b>>m;
    --a; --b;

    rep(i,m){
        int x, y; cin>>x>>y;
        --x; --y;
        edge e;
        e.to = y; e.cost = 1;
        G[x].pb(e);
        e.to = x; e.cost = 1;
        G[y].pb(e);
    }

    dijkstra(a);
    int dp[110] = {0}; // 経路数
    dp[a] = 1;

    rep(i,n){
        rep(j,n){
            if(d[j] != i) continue;
            rep(k, G[j].size()){
                int to = G[j][k].to;
                if(d[to] == i+1) {
                    dp[to] += dp[j];
                    dp[to] %= mod;
                }
            }
        }
    }

    cout << dp[b] << endl;

    return 0;
}
