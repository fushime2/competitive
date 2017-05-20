#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int w, h, n;
    cin >> w >> h >> n;
    int nowx, nowy;
    cin >> nowx >> nowy;

    int ans = 0;
    for(int i=0; i<n-1; i++) {
        int x, y;
        cin >> x >> y;
        if((nowx > x and nowy < y) or (nowx < x and nowy > y)) // 斜め道路なし
            ans += abs(x - nowx) + abs(y - nowy);
        else
            ans += max(abs(x - nowx), abs(y - nowy));
        nowx = x;
        nowy = y;
    }
    cout << ans << endl;

    return 0;
}
