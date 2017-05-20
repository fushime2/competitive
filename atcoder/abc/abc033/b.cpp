#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int main(void) {
    int n;
    cin >> n;
    int sum = 0;
    int mx = -1;
    string mxs;
    rep(i,n) {
        string s;
        int p;
        cin >> s >> p;
        if(p > mx) {
            mx = p;
            mxs = s;
        }
        sum += p;
    }
    
    if(mx > sum/2) {
        cout << mxs << endl;
    } else {
        cout << "atcoder" << endl;
    }

    return 0;
}
