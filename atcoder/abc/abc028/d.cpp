#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

using ll = long long;

ll n, k;

int main() {
    cin>>n>>k;

    ll a = 6 * (n-k) * (k-1);
    ll b = 3 * (n-1);
    ll c = 1;
    double ans = 1.0 * (a + b + c) / n / n / n;

    printf("%.15f\n", ans);

    return 0;
}
