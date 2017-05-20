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
    string s;
    int a[6]={0};
    cin >> s;
    int n=s.length();
    for(int i=0; i<n; i++) {
        if(s[i] == 'A') a[0]++;
        else if(s[i] == 'B') a[1]++;
        else if(s[i] == 'C') a[2]++;
        else if(s[i] == 'D') a[3]++;
        else if(s[i] == 'E') a[4]++;
        else a[5]++;
    }
    printf("%d %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5]);
    return 0;
}
