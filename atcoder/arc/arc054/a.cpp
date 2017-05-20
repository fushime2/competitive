#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

ll l,x,y,s,d;
int main() {
    cin>>l>>x>>y>>s>>d;
    double ans = 114514;
    if(s == d) {
        puts("0.000000000");
        return 0;
    } else if(s > d) {
        int dis1 = s - d;
        int dis2 = l - dis1;
        ans = min(1.0 * dis1 / (x+y), 1.0 * dis1 / abs(x-y));
        ans = min(1.0 * dis2 / (x+y), 1.0 * dis2 / abs(x-y));
    } else {
        int dis1 = d - s;
        int dis2 = l - dis1;
        ans = min(1.0 * dis1 / (x+y), 1.0 * dis1 / abs(x-y));
        ans = min(1.0 * dis2 / (x+y), 1.0 * dis2 / abs(x-y));
    }

    printf("%.9lf\n", ans);

    return 0;
}
