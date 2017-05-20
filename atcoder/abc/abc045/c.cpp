#include <iostream>
using namespace std;

typedef long long ll;
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"

int main() {
    string s; cin >> s;
    int n = s.size();
    int nn = n-1;

    ll ans = 0;
    for(int mask=0; mask<(1<<nn); mask++) { // + の位置
        ll sum=0, cur=0;
        for(int i=0; i<=n; i++) {
            if(mask & (1<<i)) {
                // + を i, i+1 にいれる
                sum += cur;
                cur = 0;
            }
            cur = cur*10 + (s[i] - '0');
            dbg(sum);
            dbg(cur);
        }
        sum += cur;
        ans += sum;
        //dbg(sum);
        //dbg(cur);
        cout<<"\n";
    }
    
    cout << ans << "\n";

    return 0;
}
