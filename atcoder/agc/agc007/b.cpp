#include <cstdio>

using namespace std;

int a[200010];

int main() {
    int n; scanf("%d", &n);
    for(int i=0; i<n; ++i){
        a[i] = 30000 * i + 1;
    }
    for(int i=0; i<n; ++i){
        int p; scanf("%d", &p);
        a[p-1] += i;
    }

    for(int i=0; i<n; ++i){
        printf("%d", a[i]);
        if(i==n-1) puts(""); else printf(" ");
    }

    for(int i=0; i<n; ++i){
        printf("%d", 30000 * (n - i));
        if(i==n-1) puts(""); else printf(" ");
    }

    return 0;
}
