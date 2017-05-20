#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

void solve(string s, int t) {
    int pos_x = 0, pos_y = 0, cnt = 0;
    int ans = 0;
    for(auto i : s) {
        if(i == 'U') pos_y++;
        else if(i == 'D') pos_y--;
        else if(i == 'L') pos_x--;
        else if(i == 'R') pos_x++;
        else cnt++;
    }
    pos_x = abs(pos_x); pos_y = abs(pos_y);
    int n = s.size();

    if(t == 1) {
        ans = abs(pos_x) + abs(pos_y) + cnt;
    } else {
        ans = max(0, pos_x + pos_y - cnt);
        if(n%2) ans = max(ans, 1);
    }

    cout << ans << "\n";
}

int main() {
    string s;
    int t;
    cin >> s >> t;
    solve(s, t);

    return 0;
}
