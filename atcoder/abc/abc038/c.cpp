#include <cstdio>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int n;
int a[100010] = {0};

int main() {
    scanf("%d",&n);
    rep(i,n) scanf("%d", a+i);

    int l=0, r=0;
    ll ans = 0;
    while(l < n) {
        while(a[r] < a[r+1]) r++;
        ans += r - l + 1;
        l++;
        if(l > r) r = l;
    }

    printf("%lld\n", ans);

    return 0;
}
