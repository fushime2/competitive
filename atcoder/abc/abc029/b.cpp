#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;
#define N 12

int main(void)
{
    string s;
    int ans = 0;
    for(int i=0; i<N; i++) {
        cin >> s;
        if(s.find("r") != string::npos) ans++;
    }
    cout << ans << endl;

    return 0;
}
