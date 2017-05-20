#include <stdio.h>

int main(void){
    char x;
    scanf("%c", &x);
    printf("%d\n", x - 'A' + 1);
    return 0;
}
