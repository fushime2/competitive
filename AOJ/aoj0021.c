#include <stdio.h>

int main(void)
{
    float a[8];
    int i, j, n;
    scanf("%d", &n);

    for(j=0; j<n; j++) {
        for(i=0; i<8; i++) scanf("%f", &a[i]);
        if((a[1]-a[3])/(a[0]-a[2]) == (a[5]-a[7])/(a[4]-a[6]))
            puts("YES");
        else
            puts("NO");
    }

    return (0);
}
