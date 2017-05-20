#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int main() {
    int n;
    cin >> n;
    n %= 30;

    vector<int> a(6);
    rep(i,6) a[i] = i + 1;

    rep(i,n){
        int j = i % 5;
        swap(a[j], a[j+1]);
    }

    for(int& i : a) cout << i;
    puts("");

    return 0;
}
