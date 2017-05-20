#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int n, q;
int t[200010];

int main() {
    cin >> n >> q;
    rep(i,q) {
        int l,r; cin>>l>>r;
        l--; r--;
        t[l]++; t[r+1]--;
    }

    rep(i,n+1) {
        t[i+1] += t[i];
    }

    rep(i,n) {
        if(t[i] % 2 == 0) putchar('0');
        else putchar('1');
    }
    puts("");

    return 0;
}
