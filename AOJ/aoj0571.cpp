#include <iostream>

using namespace std;

void solve(string s) {
    int n = s.size();
    int i,j,k,l;
    int ans = 0;
    for(i=0; i<n; i=l) {
        for(j=i; s[j]=='J'; j++) ;
        for(k=j; s[k]=='O'; k++) ;
        for(l=k; s[l]=='I'; l++) ;
        int a=j-i, b=k-j, c=l-k;
        if(a >= b and b <= c) ans = max(ans, b);
    }
    cout << ans << "\n";
    return ;
}

int main() {
    string s; cin >> s;
    solve(s);
    return 0;
}
