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

int main() {
    int n;
    string s;
    cin >> n >> s;
    s = s[n-1] + s + s[0];

    int sheep = 1;
    string SW = "WS"
    string t = string('S', n);
    t = t[n-1] + t + t[0];

    FOR(i,1,n+1){
        if(s[i] == 'o'){
            if(t[i-1] == t[i+1]){
                if(!sheep) t[i+1] = 'W';
            }
            else{
                if(sheep)
            }
        }
    }


    return 0;
}
