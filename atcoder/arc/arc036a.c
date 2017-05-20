#include <stdio.h>
#define N 1000000

int main(void)
{
    int n, k, i;
    int a[N]={0};
    int flag = 1;
    scanf("%d%d",&n,&k);

    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for(i=2; i<n; i++) {
        if(a[i-2] + a[i-1] + a[i] < k) {
            printf("%d\n", i+1);
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("%d\n",-1);

    return 0;
}
