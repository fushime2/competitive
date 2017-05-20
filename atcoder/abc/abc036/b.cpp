#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int n;
char c[55][55];

int main(void) {
    cin >> n;
    rep(i,n) rep(j,n) cin >> c[i][j];

    rep(j,n) {
        for(int i=n-1; i>=0; i--) {
            cout << c[i][j];
        }
        puts("");
    }

    return 0;
}
