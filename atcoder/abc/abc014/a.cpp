#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int main(void) {
    int a, b;
    cin >> a >> b;
    rep(i, 114514) {
        if((a + i) % b == 0) {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}
