#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int main(void) {
    int a,b,c; cin>>a>>b>>c;
    cout << c / min(a,b) << endl;

    return 0;
}
