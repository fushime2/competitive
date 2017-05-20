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
    string name;
    string poyo;
    cin >> name;
    int n = name.size();
    for(int i=0; i<n; i++) {
        poyo[i] = name[n-1-i];
    }
    bool ok = true;
    for(int i=0; i<n; i++) {
        if(name[i] != poyo[i]) ok = false;
    }
    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
