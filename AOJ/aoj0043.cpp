#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;
double x[4], y[4];
double ab, bc, cd, da, ac, bd;

double len(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

// Heron's Formula
double square(double a, double b, double c)
{
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s-a) * (s-b) * (s-c));
}


int main(void)
{
    while(~scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",x,y,x+1,y+1,x+2,y+2,x+3,y+3)) {
        ab = len(x[0],y[0],x[1],y[1]);
        bc = len(x[1],y[1],x[2],y[2]);
        cd = len(x[2],y[2],x[3],y[3]);
        da = len(x[3],y[3],x[1],y[1]);
        ac = len(x[0],y[0],x[2],y[2]);
        bd = len(x[3],y[3],x[1],y[1]);
        double s1,s2,s3,s4;
        s1 = square(ab, bd, da);// abd
        s2 = square(cd, bd, bc);// cdb
        s3 = square(ac, cd, da);// acd
        s4 = square(ab, bc, ac);// abc
        double comp1;
        comp1 = (s1+s2) + (s3+s4);
        double mmax = max(max(s1,s2), max(s3,s4));

        if(fabs(mmax*2.0 - comp1) > 0.00001)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
