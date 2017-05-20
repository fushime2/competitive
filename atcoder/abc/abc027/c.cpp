#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    int depth = log2(n);
    if(depth == 0) {
        puts("Aoki");
        return 0;
    }

    ll x = 1;
    bool turn = 1; // 1 -> Takahashi
    while(x <= n){
        if(depth % 2 == 0) {
            x *= 2;
            x += turn;
        } else {
            x *= 2;
            x += !turn;
        }
        turn ^= 1;
    }

    cout << (turn ? "Takahashi" : "Aoki") << endl;

    return 0;
}
