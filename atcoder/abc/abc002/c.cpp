#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100

double dist(int x1, int y1, int x2, int y2) {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main(void) {
    //ios::sync_with_stdio(false);
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double a,b,c;
    a = dist(x1,y1,x2,y2);
    b = dist(x2,y2,x3,y3);
    c = dist(x1,y1,x3,y3);
    double s = (a+b+c) / 2.000000;
    double t = sqrt(s * (s-a) * (s-b) * (s-c));
    printf("%.20lf\n", t);

    return 0;
}
