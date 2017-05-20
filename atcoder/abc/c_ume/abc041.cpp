#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define RALL(x) (x).rbegin(),(x).rend()
#define mp make_pair

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n); // height, num
    rep(i,n){
        int h;
        scanf("%d", &h);
        a[i] = mp(h, i+1);
    }
    sort(RALL(a));
    for(auto& i : a) cout << i.second << "\n";

    return 0;
}
