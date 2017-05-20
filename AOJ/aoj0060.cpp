#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    int c1, c2, c3;
    int a[10];

    while(~scanf("%d%d%d",&c1,&c2,&c3)) {
        rep(i,10) a[i] = i+1;

        int safe = 0;
        rep(i,10) {
            if(a[i]==c1 or a[i]==c2 or a[i]==c3) continue;
            if(c1 + c2 + a[i] <= 20) safe++;
        }

        if(safe/7.0 >= 0.5)
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
