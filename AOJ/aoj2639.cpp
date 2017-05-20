#include <bits/stdc++.h>

using namespace std;

void solve(int a,int b,int c) {
    int t = 0;
    for(int i=0; ; i+=a+b) {
        c += 60 * (i / 60);
        if(i<=c and c<=i+a) {
            cout << c << "\n";
            return ;
        }
        if(t > 1e5) break;
    }
    cout << -1 << "\n";
}

int main() {
    int a,b,c; cin>>a>>b>>c;
    solve(a,b,c);
    return 0;
}
