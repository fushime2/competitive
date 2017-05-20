#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    s += '+';
    int n = s.size();

    bool zero = 1;
    int ans = 0;
    for(int i=0; i<n; ++i){
        if(s[i] == '+'){
            ans += zero;
            zero = 1;
        }
        else if(s[i] == '0') zero = 0;
    }

    cout << ans << endl;

    return 0;
}
