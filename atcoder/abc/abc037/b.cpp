#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int N, Q;

int main(void) {
    cin >> N >> Q;
    int a[120] = {0};

    rep(i, Q) {
        int L,R,T; cin >> L >> R >> T;
        L--; R--;
        for(int j = L; j <= R; j++) a[j] = T;
    }

    rep(i,N) {
        cout << a[i] << "\n";
    }

    return 0;
}
