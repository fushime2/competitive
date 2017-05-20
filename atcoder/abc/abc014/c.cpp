#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

const int X = 1000001;
int sum[X+5];
int main(void) {
    int n;
    cin >> n;
    rep(i,n) {
        int a, b;
        cin >> a >> b;
        sum[a]++; sum[b+1]--;
    }

    int ans = sum[0];
    for(int i = 1; i <= X+4; i++) {
        sum[i] += sum[i-1];
        ans = max(ans, sum[i]);
    }
    cout << ans << "\n";

    return 0;
}
