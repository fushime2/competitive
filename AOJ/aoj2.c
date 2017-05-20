#include<stdio.h>
#define N 10


int main() {
    int ary[N];
    int i, j, temp;

    for(i=0; i<N; i++) {
        scanf("%d", &ary[i]);
    }

    for(i=0; i<N-1; i++) {
        for(j=0; j<N-i; j++) {
            if(ary[j] < ary[j+1]) {
               temp = ary[j];
               ary[j] = ary[j+1];
               ary[j+1] = temp;
            }
        }
    }

    printf("%d\n%d\n%d\n", ary[0], ary[1], ary[2]);

    return 0;
}
