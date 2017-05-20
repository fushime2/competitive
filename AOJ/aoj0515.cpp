#include <iostream>
#include <cstdio>
using namespace std;

bool kouji[20][20];
int dp[20][20];

void init(void) {
    for(int i=0; i<20; i++) for(int j=0; j<20; j++) {
        kouji[i][j] = false;
        dp[i][j] = 0;
    }
}

int main(void) {
    int a, b, n;
    while(1) {
        cin >> a >> b;
        if(a == 0 and b == 0) break;
        cin >> n;

        init();
        for(int i=0; i<n; i++) {
            int x, y;
            cin >> x >> y;
            kouji[y][x] = true;
        }

        for(int y=1; y<=b; y++) {
            for(int x=1; x<=a; x++) {
                if(kouji[y][x]) continue;
                if(x == 1 and y == 1) {
                    dp[y][x] = 1;
                } else {
                    dp[y][x] = dp[y][x-1] + dp[y-1][x];
                }
            }
        }

        cout << dp[b][a] << endl;
    }

    return 0;
}
