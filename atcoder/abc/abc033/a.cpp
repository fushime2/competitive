#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int main(void) {
    string s;
    cin >> s;
    if(s[0] == s[1] and s[1] == s[2] and s[2] == s[3])
        cout << "SAME" << endl;
    else
        cout << "DIFFERENT" << endl;

    return 0;
}
