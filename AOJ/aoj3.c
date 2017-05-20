/*
    ”ñ•‰®” n ‚É‚Â‚¢‚ÄAn>1 ‚Ì‚Æ‚«‚É n/10 ‚ğs‚¤‰ñ”‚ª‹‚ß‚é‚»‚ê
*/

#include <stdio.h>

int main() {
    int a, b, k;
    double c;

    while(scanf("%d%d", &a, &b) != EOF) {
        k=0;
        c = a+b;

        while(c >= 1.0) {
            c = c/10.0;
            k++;
        }

        printf("%d\n", k);
    }

    return 0;
}
