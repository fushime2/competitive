#include <bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) REP(i,0,n)
#define FOR(i,c) for(auto& (i):(c))
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) (int)(x).size()

string J(string s) {
    string t = s.substr(1, SZ(s) - 1);
    t += s[0];
    return t;
}

string C(string s) {
    string t = "";
    t += s[SZ(s)-1];
    t += s.substr(0, SZ(s) - 1);
    return t;
}

string E(string s) {
    int n = s.size();
    string t = "";
    if(n % 2 == 0) {
        t += s.substr(n/2, n/2);
        t += s.substr(0, n/2);
    } else {
        t += s.substr(n/2+1, n/2);
        t += s[n/2];
        t += s.substr(0, n/2);
    }
    return t;
}

string P(string s) {
    FOR(c, s) {
        if(isdigit(c)) {
            if(c == '9') c = '0';
            else c++;
        }
    }
    return s;
}

string M(string s) {
    FOR(c, s) {
        if(isdigit(c)) {
            if(c == '0') c = '9';
            else c--;
        }
    }
    return s;
}

void solve(string order, string msg) {
    reverse(ALL(order));
    FOR(c, order) {
        if(c == 'C') msg = J(msg);
        if(c == 'J') msg = C(msg);
        if(c == 'E') msg = E(msg);
        if(c == 'A') reverse(ALL(msg));
        if(c == 'M') msg = P(msg);
        if(c == 'P') msg = M(msg);
    }
    cout << msg << "\n";
}

int main() {
    int n; cin>>n;
    rep(data,n) {
        string order, msg;
        cin >> order >> msg;
        solve(order, msg);
    }
    return 0;
}
