#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int n;
int x[1002], y[1002], c[1002];

int main(void) {
    cin >> n;
    double X=0, Y=0;
    rep(i,n) {
        cin >> x[i] >> y[i] >> c[i];
        if(c[i] != 1) return 0;
        X += 1.0 * x[i] / n;
        Y += 1.0 * y[i] / n;
    }

    double ans = -114514;
    rep(i,n) {
        ans = max(ans, max(x[i] - X, y[i] - Y));
    }

    printf("%.15lf\n", ans);

    return 0;
}
