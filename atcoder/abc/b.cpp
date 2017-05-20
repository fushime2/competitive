#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int h1,h2,w1,w2;

int main(void) {
    cin>>h1>>w1>>h2>>w2;

    if(h1==h2 or h1==w2 or w1==h2 or w1==w2)
        puts("YES");
    else
        puts("NO");

    return 0;
}
