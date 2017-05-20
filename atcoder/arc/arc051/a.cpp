#include <iostream>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()

int x1,y1,x2,y2,x3,y3,r;

int main() {
    cin>>x1>>y1>>r;
    cin>>x2>>y2>>x3>>y3;

    if(yesNo())
        cout << "YES" << "\n" << "NO" << endl;
    else if(NoYes())
        cout << "NO" << "\n" << "YES" << endl;
    else
        cout << "YES" << "\n" << "YES" << endl;
    return 0;
}
