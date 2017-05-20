#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int main(void) {
    int n,l;
    string s;
    cin>>n>>l>>s;

    int crush = 0, tab = 1;
    rep(i,s.size()) {
        if(s[i] == '+') tab++;
        else tab--;

        if(tab > l) { tab = 1; crush++; }
    }

    cout << crush << "\n";

    return 0;
}
