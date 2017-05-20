//#pragma GCC optimize ("O3")
//#pragma GCC target ("avx")
#include <stdio.h>

int main(void){
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = b;

    while(b > 0) {
        a *= 10;
        b /= 10;
    }

    printf("%d\n", (a+c)*2);

    return 0;
}
