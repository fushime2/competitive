#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int main(void){
    int a, b;
    scanf("%d%d", &a, &b);

    int x = MAX(a,b) - MIN(a,b);
    int y = 10 + MIN(a,b) - MAX(a,b);

    printf("%d\n", MIN(x,y));
    return 0;
}
