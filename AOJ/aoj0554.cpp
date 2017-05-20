#include <iostream>
using namespace std;

int main(void)
{
    int a, sum=0;
    
    int x=0;
    for(int i=0; i<4; i++) {
        cin >> a;
        sum += a;
    }
    while(sum >= 60) {
        sum -= 60;
        x++;
    }
    cout << x << endl << sum << endl;
    return 0;
}
