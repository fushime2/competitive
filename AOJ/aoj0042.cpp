#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,-1,sizeof(a))

int W, n;
int v[1002], w[1002];
int dp[1002][1002];

int rec(int i, int j) {
    if(dp[i][j] >= 0) return dp[i][j];

    int res = 0;
    if(i == n) {
        res = 0;
    } else if(j < w[i]) {
        res = rec(i+1, j);
    } else {
        res = max(rec(i+1,j), rec(i+1, j-w[i]) + v[i]);
    }

    return dp[i][j] = res;
}

int main() {
    for(int data = 1; ; data++) {
        ZERO(v); ZERO(w); MINUS(dp);
        scanf("%d", &W);
        if(W == 0) break;
        scanf("%d", &n);
        for(int i=0; i<n; i++) scanf("%d,%d", v+i, w+i);

        int ans = rec(0, W), wret = 0;
        while(dp[0][wret] != ans) wret++;
        printf("Case %d:\n", data);
        printf("%d\n", ans);
        printf("%d\n", max(0,wret-1));
    }
    return 0;
}
