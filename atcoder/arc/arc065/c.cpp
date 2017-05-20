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

string s;

int main() {
    cin >> s;
    int n = s.size();
    s += "???????????????";

    int i = 0;
    bool f = true;
    while(i < n){
        if(s[i] == 'd') {
            if(s.substr(i, 7) == "dreamer"){
                i += 7;
                if(s.substr(i, 4) == "aser"){
                    i += 4;
                }
                else if(s.substr(i, 3) == "ase"){
                    i += 3;
                }
            } else if(s.substr(i,5) == "dream"){
                i += 5;
            }
            else {
                f = false; break;
            }
        }
        else if(s[i] == 'e'){
            if(s.substr(i, 6) == "eraser"){
                i += 6;
            } else if(s.substr(i,5) == "erase"){
                i += 5;
            }
            else{
                f = false; break;
            }
        }
        else {
            f = false; break;
        }
    }

    cout << (f ? "YES" : "NO") << "\n";

    return 0;
}
