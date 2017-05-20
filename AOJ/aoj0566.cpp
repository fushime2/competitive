#include <cstdio>
using namespace std;

int n;
int a, b, c, d;
int score[200], rank[200]={0};

int main(void)
{
    scanf("%d\n", &n);
    for(int i=0; i< n*(n-1)/2; i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(c > d)
            score[a] += 3;
        else if(c < d)
            score[b] += 3;
        else {
            score[a]++; score[b]++;
        }
    }
    for(int i=1; i<=n; i++) rank[i] = 1;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(score[i] < score[j]) rank[i]++;

    for(int i=1; i<=n; i++)
        printf("%d\n", rank[i]);

    return 0;
}
