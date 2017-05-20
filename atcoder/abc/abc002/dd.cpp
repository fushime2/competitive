#include <cstdio>
#include <bitset>
using namespace std;

int main(void) {
    int n, m;
    bool rel[13][13] = {false};
    scanf("%d%d", &n, &m);
    for(int i=0; i<m; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        x--; y--;
        rel[x][y] = rel[y][x] = true;
    }

    int ans = 0;
    for(int i=1; i<=(1<<n); i++) {
        int b = bitset<8 * sizeof(int)>(i).count();
        if(b <= ans) continue;

        bool ok = true;
        for(int j=0; j<n; j++) {
            for(int k=0; k<j; k++) {
                // 2 つ以上 1 があるときにそれらのリンクがない場合
                if(i >> j & i >> k & 1 and !rel[j][k]) {
                    ok = false;
                    break;
                }
            }
        }
        if(ok) ans = b;
    }
    printf("%d\n", ans);
    return 0;
}
