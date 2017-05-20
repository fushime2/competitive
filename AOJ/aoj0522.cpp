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
    while(cin>>s) {
        int n = s.length();
        int joi=0, ioi=0;
        for(int i=0; i<n-2; i++) {
            if(s[i] == 'J' && s[i+1] == 'O' && s[i+2] == 'I')
                joi++;
            if(s[i] == 'I' && s[i+1] == 'O' && s[i+2] == 'I')
                ioi++;
        }
        cout << joi << endl;
        cout << ioi << endl;
    }
    return 0;
}
