#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[n][3], b[n];
    for(int i=0; i<n; i++)
        for(int j=0; j<3; j++)
            cin >> a[i][j];
    for(int i=0; i<n; i++)
        b[i] = 0;

    for(int i=0; i<3; i++) {
        for(int j=0; j<n; j++) {
            bool ok = true;
            for(int k=0; k<n; k++) {
                if(j != k && a[j][i] == a[k][i]) {
                    ok = false;
                    break;
                }
            }
            if(ok)
                b[j] += a[j][i];
        }
    }

    for(int i=0; i<n; i++)
        cout << b[i] << endl;

    return 0;
}
