#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

#define PI 3.14159265359
using namespace std;

int n, r[1024];
int main(void)
{
    cin >> n;
    double rr = 0;
    for(int i=0; i<n; i++)
        cin >> r[i];
    sort(r, r+n);
    
    for(int i=0; i<n; i++) {
        if(n%2==0) {
            if(i%2==0)
                rr -= r[i]*r[i];
            else
                rr += r[i]*r[i];
        } else {
            if(i%2==0)
                rr += r[i]*r[i];
            else
                rr -= r[i]*r[i];
        }
    }
    printf("%.8f\n", rr * PI);

    return 0;
}
