#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)


int main() {
    int n,a,b;
    cin >> n >> a >> b;

    int pos = 0;
    rep(i,n) {
        string s;
        int d;
        cin >> s >> d;
        if(d < a) d = a;
        else if(d > b) d = b;
        pos += (s=="East" ? d : -d);
    }

    if(pos == 0) {
        puts("0");
    } else {
        cout << (pos>0 ? "East" : "West") << " " << abs(pos) << "\n";
    }

    return 0;
}
