#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int main() {
    int n; cin>>n;
    string s; cin>>s;
    s += "......";

    int pos = 0;
    int ans = 0;
    while(pos < n){
        if(s[pos+3]=='.') pos += 3;
        else if(s[pos+2]=='.') pos+=2;
        else if(s[pos+1]=='.') pos+=1;
        else {
            pos += 3;
            ++ans;
        }
    }

    cout<<ans<<"\n";


    return 0;
}
