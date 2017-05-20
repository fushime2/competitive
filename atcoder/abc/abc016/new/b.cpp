#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    if(a+b==c and a-b==c)
        puts("?");
    else if(a+b==c)
        puts("+");
    else if(a-b==c)
        puts("-");
    else
        puts("!");


    return 0;
}
