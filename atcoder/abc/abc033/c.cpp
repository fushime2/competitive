#include <iostream>

using namespace std;

int main(void) {
    string S;
    cin >> S;
    int N = S.size();
    int ans = 0, i = 0;

    while(i < N) {
        bool f = false; // found '0'
        while(i < N and S[i] != '+') {
            if(S[i] == '0') f = true;
            i++;
        }
        if(!f) ans++;
        i++;
    }

    cout << ans << "\n";

    return 0;
}
