#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vint;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define mp make_pair

int n,k;
vint R;

int main() {
    while(cin>>n>>k) {
        R.clear();
        rep(i,n) {
            int r; scanf("%d",&r);
            R.eb(r);
        }
        sort(RALL(R));
        
        vint t;
        rep(i,k) t.eb(R[i]);
        sort(ALL(t));

        double c = 0;
        for(auto& i : t) c = (c + i) / 2.0;

        printf("%.10f\n", c);
    }

    return 0;
}
