#include <stdio.h>
#define M 1000000
int a[M];

int main(void)
{
    int n, i, j, cnt;

    a[0] = 0; a[1] = 0;
    for(i=2; i<M; i++) a[i] = 1;

    for(i=2; i*i<M; i++) {
        if(a[i]) {
            for(j=2*i; j<M; j+=i) a[j] = 0;
        }
    }

    while(~scanf("%d", &n)) {
        cnt = 0;
        while(n) {
            cnt += a[n--];
        }
        printf("%d\n", cnt);
    }

    return (0);
}
