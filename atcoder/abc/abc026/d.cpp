#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);
const double EPS = 1.0e-6;
int a,b,c;

double f(double t){
    return a*t + b*sin(c*PI*t);
}

int main(void) {
    cin>>a>>b>>c;

    double lo=0, hi=1.0/2.0/c;
    for(int i=0; i<114514; ++i){
        double mid = (hi + lo) / 2.0;
        if(f(mid) >= 100) hi = mid;
        else lo = mid;
    }

    printf("%.10lf\n", hi);

    return 0;
}
