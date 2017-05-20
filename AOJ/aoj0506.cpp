#include <iostream>
#include <string>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

string arrange(string s) {
    int m = s.size();
    string t = "";
    rep(i,m) {
        int j, cnt = 0;
        for(j=i; j<m and s[j]==s[i]; j++) cnt++;
        t += to_string(cnt) + s[i];
        i = j-1;
    }
    return t;
}

int main() {
    int n;
    while(cin>>n && n) {
        string s;
        cin >> s;
        rep(i,n) s = arrange(s);
        cout << s << endl;
    }

    return 0;
}
