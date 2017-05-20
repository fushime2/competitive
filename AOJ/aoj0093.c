#include <stdio.h>

int main(void)
{
    int a, b, i, z;
    scanf("%d %d", &a, &b);

    while(a && b) {
        if(a == 0 && b==0) break;
        z = 1;

        for(i=a; i<=b; i++) {
            if(i%4 == 0) {
                if(i%400 == 0 && i%100 == 0)
                    printf("%d\n", i);
                if(i%100)
                    printf("%d\n", i);
                z = 0;
            }
        }
        if(z) puts("NA");
        if(scanf("%d %d", &a, &b) && a&&b) puts("");
    }

    return (0);
}
