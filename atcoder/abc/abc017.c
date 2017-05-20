#include <stdio.h>

int main(void)
{
    int s[3], e[3];
    int i, x=0;

    for(i=0; i<3; i++) {
        scanf("%d %d", &s[i], &e[i]);
        x += s[i] * e[i] / 10;
    }

    printf("%d\n", x);
    return (0);
}
