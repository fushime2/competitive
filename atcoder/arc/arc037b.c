#include <stdio.h>
#include <stdlib.h>
#define M 1000

int cmpr_int(const long long int *a, const long long int *b) 
{
    if(*a < *b)
        return -1;
    else if(*a > *b)
        return 1;
    return 0;
}

int main(void)
{
    int n, k, i, j, l;
    long long int a[M]={0}, b[M]={0}, c[M]={0};
    scanf("%d%d",&n,&k);

    for(i=0; i<n; i++)
        scanf("%lld", &a[i]);
    for(i=0; i<n; i++)
        scanf("%lld", &b[i]);

    l=0;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            c[l++] = a[i] * b[j];
        }
    }

    qsort(c, n*n, sizeof(long long int), (int(*)(const void*, const void*))cmpr_int);

    printf("%lld\n",c[k-1]);

    return 0;
}
