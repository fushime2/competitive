#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

void solve(int n) {
    string s = "";
    string t;
    rep(i,n) {
        cin>>t;
        s += t;
    }

    set<string> S;
    for(int len=1; len<=n; len++) {
        for(int i=0; i<n-len+1; i++) {
            string ss = s.substr(i,len);
            S.insert(ss);
        }
    }

    for(int i=0; ; i++) {
        if(S.count(to_string(i)) == 0) {
            cout << i << "\n";
            S.clear();
            break;
        }
    }
    return ;
}

int main() {
    int n;
    while(cin>>n) solve(n);
    return 0;
}
