#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()

void solve(int n, int q) {
    vector<int> days;
    int max_day = 0;
    rep(i,n) {
        int m; cin>>m;
        rep(j,m) {
            int date; scanf("%d",&date);
            days.push_back(date);
            max_day = max(max_day, date);
        }
    }

    for(int day=n; day>=q; day--) {
        for(int i=1; i<=max_day; i++) {
            if(count(ALL(days), i) == day) {
                cout << i << "\n";
                return ;
            }
        }
    }
    cout << 0 << "\n";
}

int main() {
    int n,q;
    while(cin>>n>>q and n) solve(n,q);
    return 0;
}
