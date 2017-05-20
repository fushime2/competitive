#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int n, m;
ll sum[100020] = {0};

int main() {
    scanf("%d%d", &n, &m);
    ll tot = 0;
    rep(i,n){
        int a,b,s;
        scanf("%d%d%d", &a,&b,&s);
        --a; --b;
        sum[a] += s;
        sum[b+1] -= s;
        tot += s;
    }

    ll mini = sum[0];
    rep(i, m-1){
        sum[i+1] += sum[i];
        mini = min(mini, sum[i+1]);
    }

    cout << tot - mini << endl;

    return 0;
}
