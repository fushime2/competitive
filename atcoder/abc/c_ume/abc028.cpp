#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define vi vector<int>
#define pb push_back

int main() {
    vi a(5);
    for(int& i : a) cin >> i;
    sort(ALL(a));
    set<int> st;

    do{
        st.insert(a[0] + a[1] + a[2]);
    } while (next_permutation(ALL(a)));

    vi v;
    for(auto& i : st) v.pb(i);
    sort(RALL(v));

    cout << v[2] << endl;

    return 0;
}
