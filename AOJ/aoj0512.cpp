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
    cin >> s;
    int n = s.length();
    for(int i=0; i<n; i++) {
        s[i] = (s[i] - 'A' + 23) % 26 + 'A';
    }
    cout << s << endl;
    return 0;
}
