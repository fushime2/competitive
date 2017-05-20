#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
string s, ss;
int n, ans = 0;

int main(void)
{
    cin >> s >> n;
    for(int i=0; i<n; i++) {
        cin >> ss;
        ss += ss;
        if(ss.find(s, 0) != string::npos) ans++;
    }
    cout << ans << endl;
    return 0;
}
