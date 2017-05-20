#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,n;
    double x1,y1,x2,y2,x3,y3,px,py,r;
    double a1,b1,c1,a2,b2,c2;
    scanf("%d",&n);

    for(i=0; i<n; i++) {
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        a1 = 2.00*(x2-x1);
        b1 = 2.00*(y2-y1);
        c1 = x1*x1 - x2*x2 + y1*y1 - y2*y2;
        a2 = 2.00*(x3-x1);
        b2 = 2.00*(y3-y1);
        c2 = x1*x1 - x3*x3 + y1*y1 - y3*y3;
        px = (b1*c2-b2*c1) / (a1*b2 - a2*b1);
        py = (c1*a2-c2*a1) / (a1*b2 - a2*b1);

        r = sqrt(pow(fabs(x1-px),2) + pow(fabs(y1-py),2));
        
        printf("%.3lf %.3lf %.3lf\n",px,py,r);
    }

    return 0;
}
