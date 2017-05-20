#include <stdio.h>

int main(void)
{
    int a,b,c,d,e;
    double max=0.0;
    unsigned int n, i;
    scanf("%d",&n);

    for(i=0; i<n; i++) {
        scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
        if(max < a+b+c+d+e*11/90.00000)
            max = a+b+c+d+e*11/90.00000;
    }

    printf("%.4f\n", max);

    return (0);
}
