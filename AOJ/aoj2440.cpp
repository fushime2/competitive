#include <iostream>
#include <map>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int main() {
    map<string, bool> memo;
    int n; cin >> n;
    rep(i,n) {
        string s; cin>>s;
        memo[s] = true;;
    }

    int m; cin >> m;
    int cur = 1;
    rep(i,m) {
        string s; cin>>s;
        if(memo[s] == 0)
            cout << "Unknown " << s << "\n";
        else if(memo[s] == 1 and cur == 1)
            cout << "Opened by " << s << "\n", cur*=-1;
        else
            cout << "Closed by " << s << "\n", cur*=-1;
    }

    return 0;
}
