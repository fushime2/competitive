#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;
#define INF 1145148100

int main(void) {
    //ios::sync_with_stdio(false);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    double s,t;
    s=(double)b/a;
    t=(double)d/c;
    if(s>t) {
        puts("TAKAHASHI");

    } else if(s<t) {
        puts("AOKI");
    } else {
        puts("DRAW");
    }

    return 0;
}
