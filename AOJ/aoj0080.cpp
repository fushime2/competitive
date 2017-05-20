#include <cstdio>
#include <cmath>
using namespace std;

void solve(long long q) {
    long double x = q / 2.0;
    while(abs(x*x*x-q) >= 0.00001*q) {
        x = 1.0 * x - (x*x*x - q) / (3 * x*x);
    }
    printf("%.15Lf\n", x);
}

int main() {
    long long q;
    while(~scanf("%lld",&q) && ~q) solve(q);
}
