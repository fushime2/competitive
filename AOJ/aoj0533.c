#include<stdio.h>
#define N 10

int main(void)
{
    int w[N], k[N];
    int i, j, temp1, temp2;

    for(i=0; i<N; i++) scanf("%d", &w[i]);
    for(i=0; i<N; i++) scanf("%d", &k[i]);

    for(i=0; i<N-1; i++) {
        for(j=1; j<N-i; j++) {
            if(w[j-1] < w[j]) {
                temp1 = w[j-1];
                w[j-1] = w[j];
                w[j] = temp1;
            }
            if(k[j-1] < k[j]) {
                temp2 = k[j-1];
                k[j-1] = k[j];
                k[j] = temp2;
            }
        }
    }

    printf("%d %d\n", w[0]+w[1]+w[2], k[0]+k[1]+k[2]);

    return (0);
}
