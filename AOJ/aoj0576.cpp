#include <iostream>
using namespace std;

int main(void) {
    int a[5];
    int t1,t2,ans;
    for(int i=0; i<5; i++)
        cin>>a[i];

    t1 = a[1]%a[3]; t2=a[2]%a[4];
    int p1 = a[1]/a[3], p2 = a[2]/a[4];
    if(t1 == 0 && t2 == 0)
        ans = a[0] - max(p1, p2);
    else if(t1 == 0)
        ans = a[0] - max(p1, p2+1);
    else if(t2 == 0)
        ans = a[0] - max(p1+1, p2);
    else
        ans = a[0] - max(p1+1, p2+1);

    cout << ans << endl;

    return 0;
}
