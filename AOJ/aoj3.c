/*
    �񕉐��� n �ɂ��āAn>1 �̂Ƃ��� n/10 ���s���񐔂����߂邻��
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
