#include <bits/stdc++.h>

using namespace std;

void solve(int d, int e) {
    double ans = 114514;
    for(int x=0; x<=d; ++x) {
        ans = min(ans, abs(sqrt(x*x + (d-x)*(d-x)) - e));
    }
    printf("%.5lf\n", ans);
}

int main() {
    int d,e;
    while(cin>>d>>e && d) solve(d,e);
    return 0;
}
