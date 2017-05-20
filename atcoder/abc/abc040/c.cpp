#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int n;
int a[100010];
int dp[100010];

int main() {
    scanf("%d", &n);
    rep(i,n) scanf("%d", a+i);


    dp[1] = abs(a[1] - a[0]);
    for(int i = 2; i < n; i++) {
        dp[i] = min(dp[i-1]+abs(a[i]-a[i-1]), dp[i-2]+abs(a[i]-a[i-2]));
    }

    printf("%d\n", dp[n-1]);

    return 0;
}
