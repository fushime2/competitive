#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    int n, m, k;
    cin >> n >> m;
    int a[2*n], b[2*n];
    for(int i=0; i<2*n; i++) a[i] = i+1;
    for(int i=0; i<m; i++) {
        cin >> k;
        if(k == 0) {
            for(int j=0; j<n; j++) {
                b[2*j] = a[j];
                b[2*j+1] = a[n+j];
            }
        } else {
            for(int j=0; j<2*n; j++) b[j] = j+1;
            for(int j=0; j<2*n-k; j++) b[j] = a[j+k];
            for(int j=0; j<k; j++) b[j+2*n-k] = a[j];
        }
        for(int j=0; j<2*n; j++) a[j] = b[j];
    }
    for(int i=0; i<2*n; i++)
        cout << a[i] << endl;

    return 0;
}
