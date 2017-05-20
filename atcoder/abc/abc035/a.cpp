#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int main(void) {
    int w,h; cin>>w>>h;
    if(w/4 == h/3)
        puts("4:3");
    else
        puts("16:9");

    return 0;
}
