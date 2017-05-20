#pragma GCC optimize ("O3")
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
 
typedef pair<int,int> pii;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define eb emplace_back
 
struct UnionFind {
    vector<int> p; 
    UnionFind(int n) : p(n, -1) {};
    bool unite(int u, int v) { 
        if ((u = root(u)) == (v = root(v))) return false;
        if (p[u] > p[v]) swap(u, v);
        p[u] += p[v]; p[v] = u;
        return true;
    }
    bool find(int u, int v) {
        return root(u) == root(v);
    }
    int root(int u) {
        return p[u] < 0 ? u : p[u] = root(p[u]);
    }
    int size(int u) {
        return -p[root(u)];
    }
};
 
const int MAX_YEAR = 200010;
 
int main() {
    int n,m,q;
    scanf("%d%d", &n, &m);
    vector<vector<pii>> edge(MAX_YEAR);
    rep(i,m){
        int a,b,y;
        scanf("%d%d%d", &a, &b, &y);
        --a; --b;
        edge[y].eb(a,b);
    }
    scanf("%d", &q);
    vector<vector<pii>> query(MAX_YEAR); // city, num;
    rep(i,q){
        int c, y;
        scanf("%d%d",&c,&y);
        --c;
        query[y].eb(c,i);
    }
 
    UnionFind uf(n);
    vector<int> ans(q);
    // yearが大きいqueryから処理する
    for(int year = MAX_YEAR; year >= 0; --year){
        for(pii& q : query[year]){
            int c = q.first, num = q.second;
            ans[num] = uf.size(c);
        }
 
        for(pii& e : edge[year]){
            int a = e.first, b = e.second;
            uf.unite(a,b);
        }
    }
 
    for (int i = 0; i < q; ++i){
        printf("%d\n", ans[i]);
    }
 
    return 0;
}