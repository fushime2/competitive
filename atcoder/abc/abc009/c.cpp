#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define SZ(x) (int)(x).size()

int n,k;
string s;

bool check(string t, vector<int> cnt, int c){
    t += ('a' + c);
    cnt[c]--;

    int x=0;
    rep(i,t.size()) x += (s[i] != t[i]);

    FOR(i,SZ(t),SZ(s)){
        int cur = s[i] - 'a';
        if(--cnt[cur] < 0) ++x;
    }
    return x <= k;
}

int main() {
    cin>>n>>k>>s;
    string t = "";
    vector<int> cnt(26,0);
    for(char& c : s) cnt[c - 'a']++;

    rep(i,n){
        rep(c,26){
            if(cnt[c] == 0) continue;
            if(check(t, cnt, c)){
                t += (c + 'a');
                cnt[c]--;
                break;
            }
        }
    }

    cout << t << endl;

    return 0;
}
