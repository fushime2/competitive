#include <iostream>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define FST1 cin.tie(0)
#define FST2 ios::sync_with_stdio(false)

int n,a,b;
string s;

int main() {
    FST1; FST2;
    cin>>n>>a>>b;
    cin>>s;
    int c = a+b;

    int p=0, q=0;
    rep(i,n) {
        bool f = false;
        if(s[i]=='a'){
            if(p < c) {
                f = true;
            }
            p++;
        }else if(s[i]=='b'){
            q++;
            if(p<c and q<=b) {
                f = true;
                p++;
            }
        }
        cout << (f ? "Yes" : "No") << "\n";
    }


    return 0;
}
