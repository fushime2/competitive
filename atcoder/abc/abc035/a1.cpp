#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int main(void) {
    int w,h; cin>>w>>h;
    if(3*w == 4*h)
        cout << "4:3" << endl;
    else
        cout << "16:9" << endl;

    return 0;
}
