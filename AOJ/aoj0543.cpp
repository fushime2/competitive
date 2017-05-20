#include <iostream>
using namespace std;

int main(void)
{
    int total, poyo;
    while(1) {
        cin >> total;
        if(total==0) break;
        for(int i=0; i<9; i++) {
            cin >> poyo;
            total -= poyo;
        }
        cout << total << endl;
    }
    return 0;
}
