#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int k;
int counter = 0;

int gcd(int a, int b) {
    if (b == 0) return a;
    counter++;
    return gcd(b, a%b);
}

int main(void) {
    cin >> k;
    if(k > 10){
        puts("ofuzake");
        return 0;
    }

    for(int a = 1; a < 500000; a++) {
        for(int b = 1; b < 500000; b++) {
            gcd(a, b);
            if(counter == k) {
                cout << a << " " << b << "\n";
                return 0;
            }
            counter = 0;
        }
    }

    return 0;
}
