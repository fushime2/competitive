#include <algorithm>
#include <cstdio>
using namespace std;

int sum[100010];
int main(void)
{
    int n, k;
    while(1) {
        scanf("%d %d", &n, &k);
        if(n==0 && k==0) break;

        int a[n];
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        for(int i=0; i<n; i++) sum[i+1] = sum[i] + a[i]; // sum[i] := a[0]からa[i-1]までの和(sum[0]=0)

        int ans = -114514810;
        for(int i=0; i<n-k+1; i++)
            ans = max(ans, sum[i+1+k] - sum[i+1]);
        printf("%d\n", ans);
    }

    return 0;
}
