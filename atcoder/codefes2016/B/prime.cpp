#include <iostream>
#include <cstdio>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// 素数判定: O(sqrt(n))
bool is_prime(ull n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(ull i = 3; i <= n/i + 1; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}

int main(void) {
    ull start = 18399999999999999990ULL + 1ULL;
    cout << "start: " << start << endl;
    if(start % 2 == 0) {
        cerr << "start must be odd number" << endl;
        return 0;
    }

    for(ull i = start; ; i += 2) {
        if(is_prime(i)) {
            cout << i << endl;
        }
    }

    return 0;
}
