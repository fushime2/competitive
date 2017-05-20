#include <stdio.h>

int main(void)
{
    int na, nb, x=0, i, j;
    scanf("%d%d", &na, &nb);
    int a[na], b[nb];
    for(i=0; i<na; i++) scanf("%d", &a[i]);
    for(i=0; i<nb; i++) scanf("%d", &b[i]);

    for(i=0; i<na; i++) {
        for(j=0; j<nb; j++) {
            if(a[i] == b[j]) x++;
        }
    }

    printf("%.7lf\n", (double)x/(double)(na+nb-x));

    return (0);
}
