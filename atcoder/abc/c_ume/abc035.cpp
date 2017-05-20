#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n+5, 0);

    rep(i,q){
        int l, r;
        scanf("%d%d", &l, &r);
        ++a[l-1]; --a[r];
    }
    rep(i, n) a[i+1] += a[i];

    rep(i,n) cout << (a[i] & 1 ? 1 : 0);
    puts("");

    return 0;
}
