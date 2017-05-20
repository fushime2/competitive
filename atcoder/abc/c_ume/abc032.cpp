#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> s(n+10, 0);
    rep(i,n) {
        scanf("%d", &s[i]);
        if(s[i] == 0) { cout << n << endl; return 0; }
    }
    if(k == 0){ puts("0"); return 0; }
    s[n++] = 114514810;
 
    int l = 0, r = 0, max_len = 0;
    long long mul = 1;
    while(l < n){
        while(r < n and mul <= k) mul *= s[r++];
        max_len = max(max_len, r - l - 1);
        mul /= s[l++];
    }
 
    cout << max_len << endl;
 
    return 0;
}
