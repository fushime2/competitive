#include <cstdio>
#include <algorithm>

using namespace std;

const int INF = 40298;

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    int ans = -INF;
    for(int i=0; i<n; i++) { // TKHS
        int ma = -INF;
        int mt = -INF;
        for(int j=0; j<n; j++) { // AOK
            if(i == j) continue;
            int aok = 0;
            int tkhs = 0;
            int s = min(i, j);
            int t = max(i, j);
            for(int k = s; k <= t; k++) {
                if(((k - s) & 1) == 1) aok += a[k];
                else tkhs += a[k];
            }
            if(ma < aok) {
                ma = aok;
                mt = tkhs;
            }
        }
        ans = max(ans, mt);
    }
    printf("%d\n", ans);

    return 0;
}
