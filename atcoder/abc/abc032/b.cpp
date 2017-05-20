#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

map<string, bool> m;

int main(void) {
    string s;
    int k;
    cin >> s >> k;
    int ans = 0;
    int n = s.size();
    for(int i=0; i<=n-k; i++) {
        string t = "";
        for(int j=i; j<i+k; j++) {
            t += s[j];
        }
        if(!m[t]) {
            ans++;
            m[t] = true;
        }
    }
    cout << ans << endl;

    return 0;
}
