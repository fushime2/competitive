#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100

int main(void) {
    int L, H, N;
    cin >> L>>H>>N;
    for(int i=0; i<N; i++) {
        int a;
        cin >> a;
        if(a < L) {
            cout << L - a << endl;
        } else if(H < a) {
            cout << -1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}
