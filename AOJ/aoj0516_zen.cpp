#include <algorithm>
#include <iostream>
using namespace std;

int main(void)
{
    int n, k;
    while(1) {
        cin >> n >> k;
        if(n==0 && k==0) break;

        int a[n];
        for(int i=0; i<n; i++) cin >> a[i]; 
        int ans, sum;
        ans = -114514810;
        for(int i=0; i<n-k+1; i++) {
            sum = 0;
            for(int j=i; j<i+k; j++) {
                sum += a[j];
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}
