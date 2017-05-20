#include <algorithm>
#include <cstdio>
#define INF 114514810

using namespace std;

int n, m;
int d[510][510];
int main(void)
{
    while(1) {
        scanf("%d %d", &n, &m);
        if(n==0 && m==0) break;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                d[i][j] = INF;

        int a, b;
        for(int i=0; i<m; i++) {
            scanf("%d %d", &a, &b);
            a--; b--;
            d[a][b] = d[b][a] = 1;
        }
        // Warshall-Floyd
        for(int k=0; k<n; k++)
            for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        // the cost from 0 to i == 1or2
        int ans = 0;
        for(int i=1; i<n; i++) {
            if(d[0][i] == 1 || d[0][i] == 2)
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
