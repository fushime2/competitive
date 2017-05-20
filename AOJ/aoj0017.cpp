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
    while(getline(cin, s)) {
        for(int i=0; i<26; i++) {
            for(int j=0; j<(int)s.size(); j++) {
                if('a' <= s[j] && s[j] <='z') {// avoid [space]
                    s[j] = (s[j] - 'a' + 1) % 26 + 'a';
                }
            }
            if(s.find("the") != string::npos || s.find("this") != string::npos ||
                    s.find("that") != string::npos)
                break;
        }
        cout << s << endl;
    }

    return 0;
}
