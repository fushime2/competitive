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

int n;
string s;

int main() {
    cin>>n>>s;

    string t="b";
    if(s==t) {
        puts("0");
        return 0;
    }

    for(int i=0; ; i++){
        if(i%3==0){
            t = "a" + t + "c";
        }else if(i%3==1){
            t = "c" + t + "a";
        }else{
            t = "b" + t + "b";
        }
        if(SZ(t) >= n) {
            if(s == t) {
                cout << i+1 << endl;
            } else {
                cout << -1 << endl;
            }
            break;
        }
    }

    return 0;
}
