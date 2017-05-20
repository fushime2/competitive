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
    //ios::sync_with_stdio(false);
    int a=0;
    scanf("%d", &a);
    int res=0;

    if(a%2 == 0) {
        res = (a/2) * (a/2);
        printf("%d\n", res);
    } else {
        res = a/2 * (int)(a/2+1);
        //cout << res << cout;
        printf("%d\n", res);
    }

    return 0;
}
