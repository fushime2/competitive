#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int n,x;

int main() {
    cin>>n>>x;
    cout<<min(abs(x-1), abs(n-x));

    return 0;
}
