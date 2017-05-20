#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

string BASE = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

void solve(int n) {
    vector<int> k(n);
    rep(i,n) cin>>k[i];
    string s; cin>>s;

    string ans = "";
    rep(i,s.size()) {
        int p;
        if('a' <= s[i] and s[i] <= 'z')
            p = s[i] - 'a';
        else
            p = s[i] - 'A' + 26;

        ans += BASE[(p - k[i%n] + 52) % 52];
    }
    cout << ans << "\n";
}

int main() {
    for(int n; cin>>n && n; ) solve(n);
    return 0;
}
