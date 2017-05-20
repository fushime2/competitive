#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

ull ans = 0;

void solve(string s) {
    int n = s.size();
    string t = "";

    for(int len = 1; len <= n-2; len++) {
        string a = s.substr(0, len);
        string b = ""+
        for(int a = 1; a <= n-2; a++) {
            b = s.substr(len, a);
        }
        string c = s.substr(len+a, n-len-a);
        t += a + b + c + a + c;
        if(t == s) ans++;
    }


}

int main() {
    string s; cin>>s;
    if((int)s.size() > 2000) return 0; // bubun-ten

    solve(s);

    return 0;
}
