#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) (int)(x).size()
#define pb push_back

bool is_prime(int n) {
    if(n < 2) return false;
    else if(n == 2) return true;
 
    if(n % 2 == 0) return 0;
    for(int i=3; i*i<=n; i+=2) if(n % i == 0) return false;
    return true;
}

int M(int n, int p) {
    vector<int> primes;
    FOR(i,n+1,n+500) if(is_prime(i)) primes.pb(i);
    vector<int> sums;
    rep(i,SZ(primes)) FOR(j,i,SZ(primes)) sums.pb(primes[i] + primes[j]);
    sort(ALL(sums));
    return sums[p-1];
}

int main() {
    int n,p;
    while(cin>>n>>p) {
        if(n==-1 and p==-1) break;
        cout << M(n,p) << "\n";
    }
    return 0;
}
