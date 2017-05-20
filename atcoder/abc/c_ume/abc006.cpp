#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    if(m < 2*n or 4*n < m) {
        puts("-1 -1 -1");
        return 0;
    }

    int x=0, y=0, z=0;
    if(m <= 3*n) {
        x = n - (m - 2*n);
        y = m - 2*n;
        z = 0;
    } else if((m - 2*n) % 2 == 0){
        x = n - (m - 2*n) / 2;
        y = 0;
        z = (m-2*n) / 2;
    } else {
        x = n - 1 - (m - 2*n) / 2;
        y = 1;
        z = (m - 2*n) / 2;
    }

    printf("%d %d %d\n", x, y, z);

    return 0;
}
