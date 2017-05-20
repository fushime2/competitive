#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define foreach(itr,a) for(__typeof((a).begin()) itr=(a).begin(); itr!=(a).end(); itr++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    char c1, c2; cin >> c1 >> c2;
    if((c1-'A') == (c2-'a'))
        puts("Yes");
    else
        puts("No");

    return 0;
}
