#include <stdio.h>

int main(void)
{
    int i, n, m, unko;
    unko = 0;
    scanf("%d",&n);

    for(i=0; i<n; i++) {
        scanf("%d",&m);

        if(m < 80) {
            unko += (80-m);
        }
    }

    printf("%d\n",unko);

    return 0;
}
