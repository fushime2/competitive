#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    string s;
    cin >> s;
    for(auto i : s) {
        if(i < '0' or '9' < i) continue;
        cout << i;
    }
    puts("");

    return 0;
}
