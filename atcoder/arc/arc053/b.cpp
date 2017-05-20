#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int a[27];

int solve(string s) {
    //int n = s.size();
    for(char i : s) a[i - 'a']++;

    vector<int> odds, evens;
    //int mx = -1;
    for(char i = 'a'; i <= 'z'; i++) {
        if(a[i - 'a'] % 2 == 0) evens.push_back(a[i-'a']);
        else odds.push_back(a[i-'a']);
    }

    for(auto i : odds) {
        int t = *min_element(ALL(evens)) + i;
        evens.push_back(t);
    }

    return (int)*max_element(ALL(evens));
}

int main(void) {
    string s; cin >> s;
    int x_min = solve(s);
    cout << x_min << "\n";

    return 0;
}
