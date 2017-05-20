#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main(void)
{
    int n, r; // 歩数, 角度
    int temp_r;
    double x=0.0, y=0.0;

    scanf("%d,%d", &n, &r);
    y = n;
    temp_r = r;

    while(1) {
        scanf("%d,%d", &n, &r);
        if(n==0 && r==0) break;

        x += n * sin(PI / 180.000 * temp_r);
        y += n * cos(PI / 180.000 * temp_r);
        temp_r += r;
    }

    printf("%d\n%d\n",(int)x, (int)y);

    return 0;
}
