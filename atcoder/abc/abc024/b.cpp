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
    int n,t,a[100001];
    cin >> n >> t;
    for(int i=0; i<n; i++)
        cin >> a[i];

    int time = 0;
    for(int i=0; i<n-1; i++) {
        if(a[i+1] - a[i] > t) {
            time += t;
        } else {
            time += a[i+1] - a[i];
        }
    }   
    time += t;
    cout << time << endl;

    return 0;
}
