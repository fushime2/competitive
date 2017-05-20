/*
    f(x)‚ÌÅ‘å’l = 153
    N-153 - N ŠÔ‚ğ’²‚×‚ê‚Îok
*/

#include <stdio.h>

long int a[10000];

int func(long int x)
{
    int s=0;

    while(x>0) {
        s += x%10;
        x /= 10;
    }

    return (s);
}

void solve(long int n)
{
    long int x;
    unsigned int i, cnt; 
    i = cnt = 0;

    for(x=n-153; x<=n; x++) {
        if(x>=0 && x + func(x) == n) {
            a[cnt++] = x;
        }
    }
    printf("%d\n", cnt);

    if(cnt) {
        for(i=0; a[i]!='\0'; i++)
            printf("%ld\n", a[i]);
    }
}

int main(void)
{
    unsigned long int n;
    scanf("%ld", &n);
    solve(n);

    return (0);
}
