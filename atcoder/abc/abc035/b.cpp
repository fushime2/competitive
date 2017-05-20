#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int main(void) {
    string s;
    int t;
    cin >> s >> t;
    int n = s.size();

    int x, y, cnt;
    x = y = cnt = 0;
    rep(i,n) {
        if(s[i] == 'L') x++;
        if(s[i] == 'R') x--;
        if(s[i] == 'U') y++;
        if(s[i] == 'D') y--;
        if(s[i] == '?') cnt++;
    }
    x = abs(x); y = abs(y);
    int ans = 0;
    if(t == 1) {
        ans = x + y + cnt;
    } else {
        ans = max(0, x+y-cnt);
        if(n%2) ans = max(ans, 1);
    }

    cout << ans << endl;

    return 0;
}
