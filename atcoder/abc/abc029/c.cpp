#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

void dfs(int n, string s)
{
    if(n == 0) {
        cout << s << endl;
    } else {
        for(char c='a'; c<='c'; c++)
            dfs(n-1, s+c);
    }
}

int main(void)
{
    int n;
    cin >> n;
    string s = "";
    dfs(n, s);

    return 0;
}
