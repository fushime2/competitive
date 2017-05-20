#include <stdio.h>

int main(void)
{
    int cnt=0, a,n, s, t, w, i;
    scanf("%d%d%d%d",&n,&s,&t,&w);


    if(s<=w && w<=t) cnt++;
    for(i=0; i<n-1; i++) {
        scanf("%d",&a);
        w += a;
        if(s<=w && w<=t) cnt++;
    }

    printf("%d\n",cnt);

    return 0;
}
