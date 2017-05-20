#include <bits/stdc++.h>
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

struct edge { int to, cost; };
vector<edge> G(2200);

int INF = 114514810;
int n,m;
bool used[3000];
int cost[2200][2200];
ll d[2200];

typedef pair<int,int> P;
void dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P>> que;
    fill(d,d+2100, INF);
    d[s] = 0;
    que.push(P(0,s));

    while(!que.empty()){
        auto p = que.top(); que.pop();
        int v = p.second;
        if(d[v] < p.first) continue;
        rep(i, SZ(G[v])){
            edge e = G[v][i];
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

int main() {
    cin>>n>>m;
    if(n > 1000 or m > 1000) return 0;;
    //ZERO(d);
    //rep(i,2200) rep(j,2200) if(i!=j) cost[i][j] = INF;

    rep(i,n){
        int k; scanf("%d",&k);
        rep(j,k){
            int lang; scanf("%d", &lang);
            int psn = i+1000;
            G[psn].to = lang;
            G[lang].to = psn;
            G[psn].cost = G[lang].cost = 1;
        }
    }

   // rep(k,n) rep(i,n) rep(j,n) d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

    for(int i=1000; i<1000+n; ++i){
        dijkstra(i);
        for(int j=i+1; j<1000+n; ++j){
            if(d[j] >= INF) {
                cout << "NO" << "\n";
                return 0;
            }
        }
    }

    cout << "YES" << "\n";

    return 0;
}
