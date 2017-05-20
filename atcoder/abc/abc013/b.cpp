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

int main() {
    int a, b;
    cin >> a >> b;

    if(a<b) swap(a,b);

    cout << min(abs(a-b), abs(a-(10+b))) << endl;


    return 0;
}
