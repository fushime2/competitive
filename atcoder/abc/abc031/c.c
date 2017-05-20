#include <stdio.h>
#define INF 40298
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) > (b) ? (b) : (a))

int main(void) {
    int n, i, j, k;
    int maxT, maxA; // max point
    int aok, tkhs; // point
    int ans = -INF;
    int a[55];
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);

    for(i=0; i<n; i++) {
        maxT = maxA = -INF;
        for(j=0; j<n; j++) {
            if(i == j) continue;
            aok = tkhs = 0;
            for(k = MIN(i, j); k <= MAX(i, j); k++) {
                if((k - MIN(i, j)) % 2 == 1)
                    aok += a[k];
                else
                    tkhs += a[k];
            }
            if(maxA < aok) {
                maxA = aok;
                maxT = tkhs;
            }
        }
        ans = MAX(ans, maxT);
    }
    printf("%d\n", ans);

    return 0;
}
