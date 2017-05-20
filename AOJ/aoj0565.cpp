#include <iostream>
using namespace std;

int main(void) {
    int pst=114514, drink=114514;
    int pri;
    for(int i=0; i<3; i++) {
        cin >> pri;
        pst = min(pst, pri);
    }
    for(int i=0; i<2; i++) {
        cin >> pri;
        drink = min(drink, pri);
    }
    cout << pst + drink - 50 << endl;
    return 0;
}
