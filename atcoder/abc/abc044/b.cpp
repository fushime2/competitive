#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vint;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define ZERO(a) memset(a,0,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair

int main() {
    string w;
    cin>>w;
    
    int cnt[26] = {0};
    for(auto& i : w) cnt[i-'a']++;
    rep(i,26) if(cnt[i] % 2 == 1) {
        cout<<"No"<<"\n";
        return 0;
    }
    cout<<"Yes"<<"\n";


    return 0;
}
