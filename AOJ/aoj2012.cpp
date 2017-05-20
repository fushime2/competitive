#include <iostream>

using namespace std;

const int INF = 114514810;

int main(void) {
    int e;
    while(cin >> e and e) {
        int ans = INF;
        for(int z = 0; z*z*z <= e; z++)
            for(int y = 0; y*y <= e - z*z*z; y++) 
                ans = min(ans, e + y + z - y*y - z*z*z);

        cout << ans << endl;
    }

    return 0;
}
