#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    double x1,x2,x3,x4;
    double y1,y2,y3,y4;
    int c1,c2,c3,c4;
    while(~scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)) {
        c1 = (y2 - y1) / (x2 - x1);
        c2 = (y3 - y2) / (x3 - x2);
        c3 = (y3 - y4) / (x3 - x4);
        c4 = (y4 - y1) / (x4 - x1);
        if(c1==c3 && c2==c4) puts("YES");
        else puts("NO");
    }

    return 0;
}
