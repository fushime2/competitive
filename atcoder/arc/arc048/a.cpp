#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int main(void) {
    int a,b;
    cin>>a>>b;

    if((a<0 and b>0) or (a>0 and b<0))
        printf("%d\n", abs(a-b)-1);
    else
        printf("%d\n", abs(a-b));

    return 0;
}
