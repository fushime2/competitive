#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int main(void) {
    string s;
    int a,b,c,d;
    cin>>s>>a>>b>>c>>d;
    s += ".";
    int n = s.size();
    rep(i,n) {
        if(i==a or i==b or i==c or i==d) cout << '"';
        if(i!=n-1) cout << s[i];
    }

    puts("");

    return 0;
}
