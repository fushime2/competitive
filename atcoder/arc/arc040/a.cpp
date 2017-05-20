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
    int n, r, b;
    string s;
    r = b = 0;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> s;
        for(int j=0; j<(int)s.size(); j++) {
            if(s[j] == 'R')
                r++;
            else if(s[j] == 'B')
                b++;
        }
    }
    if(r > b)
        cout << "TAKAHASHI" << endl;
    else if(r<b)
        cout << "AOKI" << endl;
    else
        cout << "DRAW" << endl;

    return 0;
}
