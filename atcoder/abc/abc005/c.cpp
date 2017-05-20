#include <iostream>
#include <vector>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)

int main() {
    int t,n,m;
    cin>>t>>n;
    vector<int> A(n); // tako
    rep(i,n) cin>>A[i];
    cin>>m;
    vector<int> B(m);
    rep(i,m) cin>>B[i];
    if(n < m) {
        cout << "no" << endl;;
        return 0;
    }

    bool sold[110] = {0};
    rep(i,m) {
        bool ok = false;
        rep(j,n) {
            if(!sold[j] and B[i] >= A[j] and B[i] - A[j] <= t) {
                ok = true;
                sold[j] = true;
                break;
            }
        }
        if(!ok) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;

    return 0;
}
