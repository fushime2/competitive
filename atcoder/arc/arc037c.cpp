#include <cstdio>
#define M 1000

int main(void)
{
    int n, k, i, j, l;
    long long tmp;
    long long a[M]={0}, b[M]={0}, c[M]={0};
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

    for(i=0; i<n; i++) {
        for(j=i; j<n-i; j++) {
            if(c[j] > c[j+1]) {
                tmp = c[j];
                c[j] = c[j+1];
                c[j+1] = tmp;
            }
        }
    }

    printf("%lld\n",c[k-1]);

    return 0;
}
