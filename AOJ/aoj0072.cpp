#include <iostream>
#include <algorithm>
#include <vector>
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"

using namespace std;

const int MAX_N = 114514;
int n, m;

struct edge {
    int u, v, cost;
    edge() {}
    edge(int a, int b, int c) {
        u=a; v=b; cost=c;
    }
};

vector<edge> es;

bool comp(const edge& e1, const edge& e2) {
    return e1.cost < e2.cost;
}


//
// Union-Find
//
int par[MAX_N], _rank[MAX_N];

void init(int n) {
    for (int i = 0; i < n; i++) {
        par[i] = i; _rank[i] = 0;
    }
}

int find(int x) {
    if(par[x] == x) {
        return x;
    } else {
        return par[x] = find(par[x]);
    }
}

void unite(int x, int y) {
    x = find(x); y = find(y);
    if(x == y) return ;

    if(_rank[x] < _rank[y]) {
        par[x] = y;
    } else {
        par[y] = x;
        if(_rank[x] == _rank[y]) _rank[x]++;
    }
}

bool same(int x, int y) {
    return find(x) == find(y);
}


int kruskal() {
    sort(es.begin(), es.end(), comp);
    init(n);
    int res = 0;
    rep(i,m) {
        edge e = es[i];
        if(!same(e.u, e.v)) {
            unite(e.u, e.v);
            res += e.cost;
        }
    }
    return res;
}

void solve() {
    es.clear();
    cin>>m;
    rep(i,m) {
        int a,b,d;
        scanf("%d,%d,%d",&a,&b,&d);
        es.push_back(edge(a, b, d/100 - 1));
    }
    int res = kruskal();
    cout << res << endl;
}

int main() {
    while(cin>>n, n) solve();
    return 0;
}
