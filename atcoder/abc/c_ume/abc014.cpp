#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define vi vector<int>

int main() {
    vi s(1000010, 0);
    int n;
    cin >> n;
    rep(i,n){
        int a, b;
        scanf("%d %d", &a, &b);
        ++s[a]; --s[b+1];
    }

    int ans = s[0];
    rep(i, 1000001) {
        s[i+1] += s[i];
        ans = max(ans, s[i+1]);
    }

    cout << ans << "\n";

    return 0;
}
