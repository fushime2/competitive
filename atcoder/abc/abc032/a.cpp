#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int main(void) {
    int a,b,n;
    cin>>a>>b>>n;
    for(int i=n; i<INF; i++) {
        if(i%a == 0 and i%b == 0) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
