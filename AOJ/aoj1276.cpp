#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

const int LIM = 1299709;

bool is_prime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i=3; i*i<=n; i+=2) if(n % i == 0) return false;
    return true;
}

void solve(int k) {
    int a=0, b=0;
    for(int i=k+1; ; ++i) if(is_prime(i)) {
        b = i; break;
    }
    for(int i=k-1; i>=0; --i) if(is_prime(i)) {
        a = i; break;
    }
    if(a == 0 or b == 0) {
        puts("0"); return ;
    }
    for(int i=a+1; i<=b-1; i++) if(is_prime(i)) {
        puts("0"); return ;
    }
    cout << b - a << "\n";
}

int main() {
    int k;
    while(cin>>k, k) solve(k);
    return 0;
}
