#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int main() {
    int n;
    cin >> n;
    map<int, int> nums; // a, rank;
    vi v(n);
    rep(i,n){
        int a;
        scanf("%d",&a);
        nums[a] = 0;
        v[i] = a;
    }

    int rank = 0;
    for(auto& i : nums) i.second = rank++;
    for(auto& i : v) cout << nums[i] << "\n";

    return 0;
}
