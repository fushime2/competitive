#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()

void solve(int n, int k) {
    vector<string> card(n);
    set<string> S;
    for(auto &i : card) cin >> i;

    sort(ALL(card));
    do {
        string t;
        rep(i,k) t += card[i];
        S.insert(t);
    } while(next_permutation(ALL(card)));

    cout << S.size() << "\n";

    return ;
}

int main() {
    int n, k;
    while(cin>>n>>k && n) solve(n,k);

    return 0;
}
