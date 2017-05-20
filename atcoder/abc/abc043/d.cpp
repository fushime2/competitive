#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

bool OK(string t) {
    int m = t.size();
    int cnt[27] = {0};
    for(auto& i : t) cnt[i - 'a']++;
    rep(i,26) if(cnt[i] > m/2) return true;
    return false;
}

void solve(string s) {
    int n = s.size();
    if(n == 2) {
        if(s[0] == s[1]) puts("1 2");
        else puts("-1 -1");
        return ;
    }

    for(int len=2; len<=3; len++) {
        for(int i=0; i+len<n; i++) {
            string t = s.substr(i,len);
            if(OK(t)) {
                printf("%d %d\n", i+1, i+len);
                return ;
            }
        }
    }
    puts("-1 -1");
}

int main() {
    string s;
    cin >> s;
    solve(s);

    return 0;
}
