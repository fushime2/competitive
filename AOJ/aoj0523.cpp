#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define ZERO(a) memset(a,0,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back

priority_queue<int, vint, greater<int>> Q;
priority_queue<int, vint, greater<int>> Q1;
int n;
bool u[300];

void init() {
    ZERO(u); Q.clear();
}

int main() {
    while(cin>>n) {
        init()
        rep(i,n) {
            int a; scanf("%d", &a);
            Q.push(a);
            u[a] = true;
        }
    }

    return 0;
}
