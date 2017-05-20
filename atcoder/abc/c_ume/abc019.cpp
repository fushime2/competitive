#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int main() {
    set<int> S;
    int n;
    cin >> n;

    rep(i,n){
        int a;
        scanf("%d", &a);
        while(a % 2 == 0) a /= 2;
        S.insert(a);
    }

    cout << S.size() << endl;

    return 0;
}
