#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100

int main(void) {
    //ios::sync_with_stdio(false);
    string w;
    cin >> w;
    int n = w.size();
    string s = "";
    for(int i=0; i<n; i++) {
        if(w[i]=='a' || w[i]=='i' || w[i]=='u' || w[i]=='e' || w[i]=='o') continue;
        s += w[i];
    }
    cout << s << endl;

    return 0;
}
