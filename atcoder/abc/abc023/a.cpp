#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    int x,c;
    cin >> x;
    c=0;
    while(x>=1) {
        c += (x%10);
        x /= 10;
    }
    cout << c << endl;

    return 0;
}
