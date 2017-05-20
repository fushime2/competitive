#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

void solve(int h, int w) {
    int taikaku = h*h + w*w;
    int mi = 114514;
    int px=810, py=810;
    FOR(x,1,151) {
        FOR(y,1,x) {
            int t = x*x + y*y;
            if(t > taikaku or (t==taikaku and y>h)) {
                if(t < mi or (t==mi and y<py)) {
                    mi = t;
                    px = x; py = y;
                }
            }
        }
    }

    cout << py << " " << px << "\n";
}

int main() {
    int h,w;
    while(cin>>h>>w && h) solve(h,w);
    return 0;
}
