#include <stdio.h>

int main() {
    int i, n, a, b, c, temp;

    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf("%d%d%d", &a, &b, &c);
        if(a > c) {
            temp = c;
            c = a;
            a = temp;
        }
        if(b > c) {
            temp = c;
            c = b;
            b = temp;
        }

        if(c*c == a*a + b*b) {
            puts("YES");
        } else {
            puts("NO");
        }
    }

    return 0;
}
