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
    int x,y,k;
    cin>>x>>y>>k;
    while(k>0) {
        if(y>0) {
            y--;
            x++;
        }else{
            x--;
        }
        k--;
    }
    cout<<x<<endl;

    return 0;
}
