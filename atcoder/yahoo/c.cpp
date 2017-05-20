#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define OUT(x) cout<<(x)<<"\n"
#define FASTIO cin.tie(0),ios::sync_with_stdio(0)
#define pb push_back
#define mp make_pair
 
int n, k;

bool C(string& t, vector<string>& tg){
    for(auto& s : tg){
        if(SZ(s) < SZ(t)) continue;
        if(s.substr(0, SZ(t)) == t) {
            return false;
        }
    }
    return true;
}
 
int main() {
    FASTIO;
    cin>>n>>k;
    vector<int> a(k);
    for(auto& i : a) {
        cin >> i;
    }

    vector<string> ss, tg;
    sort(ALL(a));
    rep(i,n){
        string s;
        cin >> s;
        if(binary_search(ALL(a), i+1)){
            ss.pb(s);
        }
        else{
            tg.pb(s);
        }
    }
 
    // 最小の長さをみつける
    int mini = 114514810;
    for(auto& s : ss){
        mini = min(mini, SZ(s));
    }
 
    string t = "";
    rep(i, mini){
        bool f = true;
        char bg = ss[0][i];
        for(auto& s: ss){
            if(s[i] != bg) f = false;
        }
        if(!f) break;
        t += bg;
    }
    //dbg(t);
 
    int lb = -1, ub = t.size() + 1; // length
    while(ub - lb > 1){
        //dbg(ub); dbg(lb);
        int mid = (lb + ub) / 2;
        string p = t.substr(0, mid);
        if(C(p, tg)){
            ub = mid;
        }
        else{
            lb = mid;
        }
    }
    string p = t.substr(0, ub);
    // dbg(p);
    // dbg(lb);
    if(C(p, tg)){
        OUT(p);
    }
    else{
        OUT(-1);
    }
 
    return 0;
}