#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if(n == 1) return false;
    for(int i=2; i*i<=n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    if(isPrime(n)) {
        puts("Prime");
    } else {
        if(n != 1 && n%2!=0 && n%5!=0 && n%3!=0)
            puts("Prime");
        else
            puts("Not Prime");
    }

    return 0;
}
