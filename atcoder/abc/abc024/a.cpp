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
    ios::sync_with_stdio(false);
    int a,b,c,k,s,t;
    cin>>a>>b>>c>>k>>s>>t;
    int sum=s+t;
    if(sum<k) {
        cout << a*s + b*t << endl;
    } else {
        cout << (a*s+b*t) - c*sum << endl;

    }
    


    return 0;
}
