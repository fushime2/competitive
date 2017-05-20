#include <bits/stdc++.h>
using namespace std;

#define ALL(x) (x).begin(),(x).end()

int main() {
    vector<int> a(5);
    for(int i=0; i<5; i++) scanf("%d", &a[i]);
    
    set<int> S;
    do {
        S.insert(a[0]+a[1]+a[2]);
    } while (next_permutation(ALL(a)));

    vector<int> v;
    for(auto& i : S) v.push_back(i);
    sort(v.rbegin(),v.rend());

    printf("%d\n", v[2]);

    return 0;
}
