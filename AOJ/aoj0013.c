#include <stdio.h>

int main(void)
{
    int x,i=0;
    int a[1024] = {0};
    while(~scanf("%d", &x)) {
        if(x != 0) {
            a[i++] = x;
        } else {
            printf("%d\n",a[--i]);
        }
    }

    return (0);
}
