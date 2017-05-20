#include <stdio.h>

int main(void)
{
    int w, n, i, temp, a, b;
    scanf("%d", &w);
    scanf("%d", &n);

    int x[w];
    for(i=0; i<w; i++)
        x[i] = i+1;

    for(i=0; i<n; i++) {
        scanf("%d,%d", &a, &b);
        temp = x[a-1];
        x[a-1] = x[b-1];
        x[b-1] = temp;
    }

    for(i=0; i<w; i++)
        printf("%d\n",x[i]);

    return (0);
}
