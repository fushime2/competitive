#include <stdio.h>
#define N 1001

int main(void)
{
    int i;
    char s[N];
    scanf("%s", s);

    for(i=0; s[i]; i++)
        putchar((s[i] - 'A' + 23) % 26 + 'A');

    puts("");
    return (0);
}
