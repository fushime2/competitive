#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define ZERO(a) memset(a,0,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair



int main() {
    int a,b,h; cin>>a>>b>>h;
    cout << (a+b)*h / 2 << "\n";


    return 0;
}
