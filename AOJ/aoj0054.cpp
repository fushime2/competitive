#include <iostream>
using namespace std;


int main() {
    int a,b,n;
    while(cin>>a>>b>>n) {
        int c = (a%b) * 10;
        int ans = 0;
        for(int i=0; i<n; i++) {
            ans += c / b;
            c = (c%b) * 10;
        }
        cout << ans << "\n";
    }

    return 0;
}
