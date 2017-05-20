#include <cstdio>
#include <algorithm>

int rel[n][n];

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0; i<m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        rel[a][b]++; rel[b][a]++;
    }

    for(int k=0; k<n; k++) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(rel[i][j])
            }
        }
    }

    for(int i=0; i<n; i++) {

    }

    return 0;
