#include <iostream>
#include <string>
using namespace std;

typedef long long ll;
#define INF 1145148100

int main(void) {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    n %= 30;
    string s = "123456";
    for(int i=0; i<n; i++) {
        swap(s[i%5], s[i%5+1]);
    }
    cout << s << endl;

    return 0;
}
