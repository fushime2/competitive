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

ll a,b;
string s1 = "Positive";
string s2 = "Negative";
string s3 = "Zero";

int main() {
    cin >> a >> b;
    string t;
    if(a > 0) t = s1;
    else if(a < 0 and b > 0) t = s3;
    else if(a==0 or b==0) t = s3;
    else if((b-a) % 2 == 0) t = s2;
    else t = s1;

    cout << t << "\n";

    return 0;
}
