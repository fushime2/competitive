#include <algorithm>
#include <cstdio>

using namespace std;

int main(void)
{
    int n, m, a, b;
    scanf("%d %d", &n, &m);
    int dist = 0;
    for(int i=0; i<m; i++) {
        scanf("%d %d", &a, &b);
        dist = min(a-1, n - a);
        dist = min(dist, min(b-1, n-b));
        printf("%d\n", dist % 3 + 1);
    }
    return 0;
}
