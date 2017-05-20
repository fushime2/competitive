#include <stdio.h>

int main(void)
{
    int d, i;
    long int s;

    while(~scanf("%d", &d)) {
        s = 0;
        for(i=d; i<=(600-d); i+=d) {
            s += d*i*i;
        }

        printf("%ld\n", s);
    }

    return (0);
}
