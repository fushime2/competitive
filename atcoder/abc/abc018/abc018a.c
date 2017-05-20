/*
    rank = (‚»‚Ìl‚æ‚è‘½‚­‚Ì“¾“_‚ğŠl“¾‚µ‚½l”) + 1
 */
#include <stdio.h>
#define N 3

int main(void)
{
    int i, j, tmp;
    int a[N], b[N];
    for(i=0; i<N; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    for(i=0; i<N; i++) {
        for(j=0; j<N-1; j++) {
            if(b[j]<b[j+1]) {
                tmp = b[j];
                b[j] = b[j+1];
                b[j+1] = tmp;
            }
        }
    }

    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            if(a[i]==b[j])
                printf("%d\n", j+1);
        }
    }

    return (0);
}
