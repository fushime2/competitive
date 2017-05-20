#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define vint vector<int>
#define pb push_back
#define eb emplace_back

int main() {
    int n; cin >> n;

    int diff = 2025 - n;
    FOR(i,1,10) FOR(j,1,10) {
        if(i*j == diff) printf("%d x %d\n", i, j);
    }

    return 0;
}
