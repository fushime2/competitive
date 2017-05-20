#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    int n;
    string s;
    cin >> n >> s;

    string str="b";
    int i = 0;
    while(str.size() < s.size()) {
        if(i%3 == 0) {
            str = 'a' + str + 'c';
        } else if(i%3 == 1) {
            str = 'c' + str + 'a';
        } else if(i%3 == 2) {
            str = 'b' + str + 'b';
        }
        i++;

    }

    if(s == str) {
        cout << i << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
