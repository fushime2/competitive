#include <stdio.h>

int main(void)
{
    int n, a, b, k;
    int x, cnt=0;
    int flag = 0;
    scanf("%d",&n);
    scanf("%d%d",&a,&b);
    scanf("%d",&k);

    int p[101] = {0};

    while(1) {
        scanf("%d",&x);
        if(x==a || x==b) {
            flag=1;
            break;
        }

        if(p[x] == 0) {
            p[x] = 1;
            cnt++;
        } else {
            flag = 1;
            break;
        }

        if(cnt==k) break;
    }
    

    if(flag)
        puts("NO");
    else
        puts("YES");

    return 0;
}
