#include <bits/stdc++.h>
using namespace std;

#define SZ(x) (int)(x).size()
const int INF = 114514;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto& i : a) cin>>i;

    int ans = -INF;
    for(int tk=0; tk<n; tk++) {
        int mx_aoki, mx_tkhs;
        mx_aoki = mx_tkhs = -INF;
        for(int ao=0; ao<n; ao++) {
            if(tk == ao) continue;
            vector<int> t;
            for(int i=0; i<n; i++) {
                if(min(tk,ao) <= i and i <= max(tk,ao)) t.push_back(a[i]);
            }
            int aok=0, tkhs=0;;
            for(int i=0; i<SZ(t); i++) ((i+1)%2==1 ? tkhs : aok) += t[i];
            if(aok > mx_aoki) {
                mx_aoki = aok;
                mx_tkhs = tkhs;
            }
        }
        ans = max(ans, mx_tkhs);
    }

    cout << ans << endl;

    return 0;
}
