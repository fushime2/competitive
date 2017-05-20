#include <bits/stdc++.h>
using namespace std;

using P = pair<int,int>;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)


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
    int n, k, l;
    cin>>n>>k>>l;
    UnionFind uf1(n), uf2(n);

    rep(i,k){
        int p, q;
        scanf("%d%d",&p,&q);
        --p; --q;
        uf1.unionSet(p,q);
    }
    rep(i,l){
        int p, q;
        scanf("%d%d",&p,&q);
        --p; --q;
        uf2.unionSet(p,q);
    }

    map<P, int> mp;
    rep(i,n) {
        ++mp[P(uf1.root(i), uf2.root(i))];
    }
    rep(i,n){
        int x = mp[P(uf1.root(i), uf2.root(i))];
        cout << x;
        cout << (i == n-1 ? "\n" : " ");
    }

    return 0;
}
