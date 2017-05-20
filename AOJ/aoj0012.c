#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    double x1,x2,x3,y1,y2,y3;
    double xp,yp;
    double z1,z2,z3;

    while(~scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)) { 
        z1 = (x3 - x2) * (yp - y2) - (y3 - y2) * (xp - x2);
        z2 = (x1 - x3) * (yp - y3) - (y1 - y3) * (xp - x3);
        z3 = (x2 - x1) * (yp - y1) - (y2 - y1) * (xp - x1);

        if((z1>0 && z2>0 && z3>0) || (z1<0 && z2<0 && z3<0))
            puts("YES");
        else
            puts("NO");
    }


    return 0;
}
