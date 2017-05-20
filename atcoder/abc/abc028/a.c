#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if(n < 60)
        puts("Bad");
    else if(n >= 60 && n < 90)
        puts("Good");
    else if(n >= 90 && n < 100)
        puts("Great");
    else
        puts("Perfect");
    return 0;
}
