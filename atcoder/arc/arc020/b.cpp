#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    int n,c,i,j,k;
    int a[10];
    cin >> n >> c;
    for(i=0; i<n; i++) cin >> a[i];
    int ans = 114514;

    for(i=1; i<=10; i++) {
        for(j=1; j<=10; j++) {
            if(i == j) continue;
            int cnt = 0;
            for(k=0; k<n; k++) {
                if(k%2 == 0) {
                    if(i != a[k]) cnt++;
                } else {
                    if(j != a[k]) cnt++;
                }
            }
        ans = min(ans,cnt);
        }
    }
    cout << ans * c << endl;

    return 0;
}
