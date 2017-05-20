#include <iostream>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define SZ(x) (int)((x).size())

string table[] = {
    "",
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};

void solve(string s) {
    int n = s.size();
    int i=0;
    while(i < n) {
        int st = i;
        while(i<n and s[i]!='0') i++;
        if(0<i and s[i-1]-'0' != 0) {
            string t = table[s[i-1]-'0'];
            cout << t[(i - st - 1) % SZ(t)];
        }
        i++;
    }
    cout << "\n";
}

int main() {
    int n; cin>>n;
    rep(data,n) {
        string s; cin >> s;
        solve(s);
    }
    return 0;
}
