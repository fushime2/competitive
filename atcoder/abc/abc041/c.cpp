#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define vint vector<int>
#define pb push_back
#define eb emplace_back

int n;
vector<pair<int,int> > a;


int main() {
    cin >> n;
    rep(i,n) {
        int cc;
        scanf("%d",&cc);
        a.pb(make_pair(cc,i+1));
    }

    sort(a.rbegin(),a.rend());

    for(auto aa : a) {
        cout << aa.second << "\n";
    }

    return 0;
}
