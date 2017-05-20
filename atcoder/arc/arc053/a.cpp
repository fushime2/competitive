#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int h,w;
int main() {
    cin >> h >> w;

    cout << (h-1)*w + h*(w-1) << "\n";

    return 0;
}
