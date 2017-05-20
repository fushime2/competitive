#include <cstdio>
#include <algorithm>
#include <cmath>
#define M 1000000002

using namespace std;

int l[10001], r[10001],s[110],t[110];

int main(void)
{
    int n, k, d;

    scanf("%d %d %d", &n, &d, &k);
    for(int i=0; i<d; i++)
        scanf("%d %d", &l[i], &r[i]);
    for(int i=0; i<k; i++)
        scanf("%d %d", &s[i], &t[i]);

    for(int i=0; i<k; i++) {
        int a, b;
        a = b = s[i];
        for(int j=0; j<=d; j++) {
            if(a <= t[i] && t[i] <= b) {
                printf("%d\n", j);
                break;
            }

            if((l[j] <= a && a <= r[j]) || (l[j] <= b && b <= r[j])) {
                a = min(a, l[j]);
                b = max(b, r[j]);
            }
        }
    }
    return 0;
}
