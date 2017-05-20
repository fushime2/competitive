#include <iostream>
using namespace std;

typedef long long ll;

// from char to int
int f(const char c) {
    return c - '0';
}

int main() {
    string s; cin>>s;
    int n = s.size(), nn = n-1;

    ll ans = 0;
    for(int mask=0; mask<(1<<nn); mask++) {
        ll sum=0, cur=0;
        for(int i=0; i<n; i++) {
            if(mask & (1<<(i-1))) {
                sum += cur;
                cur = 0;
            }
            cur = cur*10 + f(s[i]);
        }
        sum += cur;
        ans += sum;
    }

    cout << ans << "\n";

    return 0;
}
