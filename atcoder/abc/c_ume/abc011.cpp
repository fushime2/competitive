#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

bool check(int n, int a, int b, int c){
    if(n==a or n==b or n==c) return false;
    
    rep(i,100){
        bool ng = true;;
        rep(j,3){
            int sub = 3 - j;
            int p = n - sub;
            if(p!=a and p!=b and p!=c){
                n -= sub;
                ng = false;
                break;
            }
        }
        if(ng) return false;
    }
    return n <= 0;
}

int main() {
    int n,a,b,c;
    while(cin>>n>>a>>b>>c){
        cout << (check(n,a,b,c) ? "YES" : "NO") << endl;
    }

    return 0;
}
