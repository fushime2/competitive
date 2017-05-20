#include <stdio.h>

long int fact(int x) {
    if(x==1)
        return(1);
    else
        return(x * fact(x-1));
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%ld\n", fact(n));
    return (0);
}
