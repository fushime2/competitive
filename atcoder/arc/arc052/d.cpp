#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int K, M;

int main() {
    cin >> K >> M;
    if(M > 100000) return 0;

    int ans = 0;
    for(int N = 1; N <= M; N++) {
        int p_sum = 0;
        int p = N % K;
        int NN = N;
        while(NN > 0) {
            p_sum += NN % 10;
            NN /= 10;
        }
        if(p_sum % K == p) {
            ans++;
            //cout << N << endl;
        }
    }

    cout << ans << "\n";

    return 0;
}
