#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main(void)
{
    int i,cnt;
    char s[N];
    scanf("%s",s);

    i=0; cnt=1;
    while(s[i] != 0) {
        if(s[i+1] != s[i]) {
            printf("%c%d",s[i],cnt);
            cnt = 0;
        }
        cnt++;
        i++;
    }

    puts("");

    return (0);
}
