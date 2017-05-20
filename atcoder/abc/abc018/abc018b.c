#include <stdio.h>
#include <string.h>
#define M 101

int main(void)
{
    int n, l, r;
    int i, j;
    char str[M], t[M]={0};
    scanf("%s", str);
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf("%d %d", &l, &r);
        for(j=l-1; j<=r-1; j++) {
            t[j] = str[j];
        }
        for(j=0; j<r-l+1; j++) {
            str[l-1+j] = t[r-1-j];
        }
    }


    printf("%s\n", str);
    return (0);
}
