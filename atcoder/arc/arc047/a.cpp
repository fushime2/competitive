#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int main(void) {
    int n,l;
    string s;
    cin >> n >> l >> s;
    int crs = 0;
    int tb = 1;
    for(int i=0; i<n; i++) {
        if(s[i] == '+') {
            tb++;
        } else {
            tb--;
        }
        if(tb > l) {
            crs++;
            tb = 1;
        }
    }
    cout << crs << endl;

    return 0;
}
