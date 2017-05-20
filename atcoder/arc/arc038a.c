#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef int (*unko)(const void *, const void *);

int main(void)
{
    int a[1001]={0};
    int i, n, sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    qsort(a, n, sizeof(a[0]), (unko)strcmp);

    if(n % 2 == 0) {
        for(i=n-2; i>=0; i=i-2) {
            sum += a[i];
        }
    } else {
        for(i=n-1; i>=0; i=i-2) {
            sum += a[i];
        }

    }


    printf("%d\n",sum);
    return 0;
}
