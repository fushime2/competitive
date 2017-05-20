#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

void dfs(int n, string s) {
    if(n == 0) {
        cout << s << endl;
    } else {
        for(char i='a'; i<='c'; i++) {
            dfs(n-1, s+i);
        }
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    dfs(n, "");

    return 0;
}
