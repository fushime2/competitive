#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()

int m,d;

int main() {
    cin>>m>>d;
    cout<<(m%d==0 ? "YES" : "NO")<<"\n";

    return 0;
}
