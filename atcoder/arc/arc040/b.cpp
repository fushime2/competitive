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
    int n, r;
    char s[300];
    cin>>n>>r>>s;
    int last = -1;
    for(int i=0; i<n; i++) {
        if(s[i] == '.')
            last = i;// 最後の.の位置
    }
    int move = max(0, last-r+1);// 移動回数

    int ans;
    ans=0;

    for(int i=0; i<n; i++) {
        if(s[i] == '.') {
            for(int j=0; j<r; j++) {
                s[i+j] = 'o';
            }
            ans++;
        }
    }
    cout << ans + move << endl;
    return 0;
}
