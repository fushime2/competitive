#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define SZ(x) (int)(x).size()

string ban = "WBWBWWBWBWBW";
vector<string> v = { "Do", "?", "Re", "?", "Mi", "Fa", "?","So", "/", "La","/", "Si"};

int main() {
    string s;
    cin >> s;
    string t = ban + ban + ban + ban;
    int p = 0;
    rep(i,22) if(t.substr(i,20) == s){
        p = i;
        break;
    }
    cout << v[p] << endl;

    return 0;
}
