#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

int N;

bool isName(string shop, string board) {
    int m = board.length();
    for(int step=1; step<=m; step++) {
        for(int i=0; i<m; i++) {
            string s = "";
            for(int j=i; j<m; j+=step) {
                s += board[j];
            }
            if(s.find(shop) != string::npos) return true;
        }
    }
    return false;
}

int main(void) {
    cin >> N;
    string shop, board;
    cin >> shop;
    int ans = 0;
    for(int i=0; i<N; i++) {
        cin >> board;
        if(isName(shop, board)) ans++;
    }
    cout << ans << endl;
    return 0;
}
