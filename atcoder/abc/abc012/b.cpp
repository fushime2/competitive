#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define vint vector<int>
#define pb push_back
#define eb emplace_back

int main() {
    int n;
    cin >> n;
    int h = n / 3600;
    int m = (n%3600) / 60;
    int s = n % 60;

    printf("%02d:%02d:%02d\n",h,m,s);

    return 0;
}
