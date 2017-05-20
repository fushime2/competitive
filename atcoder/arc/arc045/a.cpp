#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;

int main(void)
{
    string s;
    string ans = "";
    while(cin >> s) {
        if(s.find("Left") != string::npos)
            ans += "< ";
        if(s.find("Right") != string::npos)
            ans += "> ";
        if(s.find("AtCoder") != string::npos)
            ans += "A ";
    }
    ans.erase(ans.size()-1);
    cout << ans << endl;

    return 0;
}
