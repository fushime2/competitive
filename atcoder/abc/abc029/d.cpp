#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;

    ll ans = 0, cur = 1, pre = 0;
    while(n > 0){
        if(n % 10 == 0){
            ans += (n / 10) * cur;
        }
        else if(n % 10 == 1){
            ans += (n / 10) * cur;
            ans += pre + 1;
        }
        else{
            ans += (n / 10 + 1) * cur;
        }
        pre += (n % 10LL) * cur;
        n /= 10LL;
        cur *= 10;
        
        cout << ans << endl;
        cout << pre << endl;
        puts("");
    }

    cout << ans << endl;


    return 0;
}
