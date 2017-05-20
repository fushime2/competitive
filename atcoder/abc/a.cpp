#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    string s; cin>>s;
    int n=s.size();
    if(s[n-1] == 'T')
        puts("YES");
    else
        puts("NO");

    return 0;
}
