#include <bits/stdc++.h>
using namespace std;

#define ALL(x) (x).begin(),(x).end()
#define pb push_back

int n;
vector<string> v;

void dfs(string s, int d){
    if(d == n){
        v.pb(s);
        return ;
    }

    for(char c='a'; c<='c'; ++c) dfs(s + c, d + 1);
}

int main() {
    cin >> n;

    dfs("", 0);
    sort(ALL(v));
    for(auto& s : v) cout << s << "\n";


    return 0;
}
