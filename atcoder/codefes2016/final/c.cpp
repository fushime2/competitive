#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

// Spagetthi Source:
// http://www.prefield.com/algorithm/container/union_find.html
struct UnionFind {
  vector<int> data;
  UnionFind(int size) : data(size, -1) { }
  bool unionSet(int x, int y) {
    x = root(x); y = root(y);
    if (x != y) {
      if (data[y] < data[x]) swap(x, y);
      data[x] += data[y]; data[y] = x;
    }
    return x != y;
  }
  bool findSet(int x, int y) {
    return root(x) == root(y);
  }
  int root(int x) {
    return data[x] < 0 ? x : data[x] = root(data[x]);
  }
  int size(int x) {
    return -data[root(x)];
  }
};


int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    UnionFind uf(n + m);

    rep(i,n){
        int k; scanf("%d", &k);
        rep(j,k){
            int l; scanf("%d", &l);
            --l;
            uf.unionSet(i, n + l);
        }
    }

    bool ok = true;
    rep(i,n) if(!uf.findSet(0,i)) ok = false;
    cout << (ok ? "YES" : "NO") << endl;;

    return 0;
}
