#include <iostream>

using namespace std;

void solve(string x) {
    int s=0, st=0;
    for(char& c : x) {
        if(c == 'S') {
            s++;
        } else {
            if(s > 0) {
                st++;
                s--;
            }
        }
    }

    int res = (int)x.size() - 2*st;
    cout << res << "\n";
}

int main() {
    string x;
    cin >> x;
    solve(x);
    return 0;
}
