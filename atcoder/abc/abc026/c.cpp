#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;

vector<int> b;

int solve(int m) {
    int ma = 1, mi = 114514810;
    bool f = true;
    for(int i=0; i<(int)b.size(); i++) {
        if(b[i] == m) {
            f = false;
            int k = solve(i);
            ma = max(ma, k);
            mi = min(mi, k);
        }
    }
    if(f) return 1;
    else return (ma + mi + 1);
}

int main(void) {
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    b.push_back(-1);

    for(int i=1; i<N; i++) {
        int in; cin >> in;
        b.push_back(in - 1);
    }
    cout << solve(0) << endl;

    return 0;
}
