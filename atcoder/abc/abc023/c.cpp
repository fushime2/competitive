#include <iostream>
#include <map>
#include <vector>

#define R_MAX 100000
#define C_MAX 100000
#define K_MAX 100000

using namespace std;
int rr[R_MAX], cc[C_MAX];

int main(void)
{
    ios::sync_with_stdio(false);
    int r, c, k, n;
    cin >> r >> c >> k >> n;
    for(int i=0; i<n; i++)
        cin >> rr[i] >> cc[i];
    int cnt1=0, cnt2=0;
    for(int i=0; i<n; i++) {
        if(r == rr[i]) cnt1++;
        if(c == cc[i]) cnt2++;
    }

    cout << (cnt1 + cnt2) << endl;
        
    return 0;
}
