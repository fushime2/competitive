#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100

int main(void) {
    //ios::sync_with_stdio(false);
    int n;
    scanf("%d", &n);
    int ans = INF;
    for(int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        ans = min(ans, t);
    }
    printf("%d\n", ans);

    return 0;
}
