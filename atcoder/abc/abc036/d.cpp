#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)(n);i++)

map<int,int> nums;

int main(void) {
    int n; cin>>n;
    vector<int> a(n);
    set<int> S;
    rep(i,n) {
        int x; scanf("%d", &x);
        a[i] = x;
        S.insert(x);
    }

    int rank = 0;
    for(auto& i : S) {
        nums[i] = rank++;
    }

    for(auto& i : a) printf("%d\n", nums[i]);

    return 0;
}
