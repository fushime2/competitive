#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

void solve(string s, string t) {
    string s1 = "You can win";
    string s2 = "You will lose";
    string atc = "@atcoder";

    rep(i, s.size()) {
        bool f = false;
        if(s[i]=='@') {
            rep(j,atc.size()) if(t[i] == atc[j]) f = true;
        } else if(t[i]=='@') {
            rep(j,atc.size()) if(s[i] == atc[j]) f = true;
        } else if(s[i] != t[i]) {
            cout << s2 << "\n";
            return ;
        } else if(s[i]==t[i]){
            f = true;
        }

        if(!f) {
            cout << s2 << "\n";
            return ;
        }
    }

    cout << s1 << "\n";
}

int main() {
    string s, t;
    while(cin >> s >> t) solve(s,t);

    return 0;
}
