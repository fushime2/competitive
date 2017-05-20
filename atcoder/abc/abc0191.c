#include <stdio.h>

int main(void)
{
    int t, i, j, a[3];
    for(i=0; i<3; i++)
        scanf("%d",&a[i]);

    for(i=0; i<3; i++) {
        for(j=0; j<2-i; j++) {
            int k = j+1;
            if(a[j]>a[k]) {
                t = a[j];
                a[j] = a[k];
                a[k] = t;
            }
        }
    }

    printf("%d\n", a[1]);

    return 0;
}
