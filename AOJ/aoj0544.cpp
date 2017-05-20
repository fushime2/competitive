#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void)
{
    int n, m;
    while(1) {
        scanf("%d %d", &n, &m);
        if(n==0 && m==0) break;
        int mas[n], me[m];
        for(int i=0; i<n; i++) scanf("%d", &mas[i]);
        for(int i=0; i<m; i++) scanf("%d", &me[i]);
        int pos = 1, step = 0;
        while(pos < n) {
            pos = max(1, pos + me[step] + mas[pos + me[step] - 1]);
            step++;
        }
        printf("%d\n", step);
    }

    return 0;
}
