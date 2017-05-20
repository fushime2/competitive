#include <stdio.h>
#define N 9

int main(void) {
    int a[N];
    int i, s, x;

    while(1) {
        scanf("%d", &s);
        if(s==0) break;

        x=0;
        for(i=0; i<N; i++) {
            scanf("%d", &a[i]);
            x += a[i];
        }
        printf("%d\n", s-x);
    }

    return (0);

}
