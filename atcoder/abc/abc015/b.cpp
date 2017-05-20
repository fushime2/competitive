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

int main() {
    cin >> n;
    int sum = 0, cnt = 0;;
    rep(i,n) {
        int a; cin >> a;
        if(a == 0) continue;
        sum += a;
        cnt++;
    }

    cout << (int)(1.0*sum/cnt + 0.9) << endl;


    return 0;
}
