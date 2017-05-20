#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back
 
int n;
int a[100010];
 
int main(void) {
    scanf("%d", &n);
    rep(i,n) scanf("%d", &a[i]);
 
    ull ans = 0;
    int l=0, r=0;
    while(l < n) {
        ans++;
        while(r < n-1 and a[r] < a[r+1]) {
            ans++;
            r++;
        }
        l++;
        r=l;
    }
 
 
    cout << ans << "\n";
 
    return 0;
}
