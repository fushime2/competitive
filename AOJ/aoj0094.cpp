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
    int a,b;
    double s;
    scanf("%d%d",&a, &b);
    s = a / 3.3057850 * b;

    printf("%.6lf\n", s);
    return 0;
}
