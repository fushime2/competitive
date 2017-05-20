#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define ZERO(a) memset(a,0,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair

string s1,s2,s3;

int main() {
    cin>>s1>>s2>>s3;
    int c1,c2,c3;
    c1 = c2 = c3 = 0;
    int n1 = SZ(s1);
    int n2 = SZ(s2);
    int n3 = SZ(s3);
    char a='A';
    string ans="";
    while(1) {
        if(a=='A') {
            if(c1 == n1) {
                ans = 'A'; break;
            }
            if(s1[c1] == 'a') a='A';
            if(s1[c1] == 'b') a='B';
            if(s1[c1] == 'c') a='C';
            c1++;
        }
        if(a=='B') {
            if(c2 == n2) {
                ans = 'B'; break;
            }
            if(s2[c2] == 'a') a='A';
            if(s2[c2] == 'b') a='B';
            if(s2[c2] == 'c') a='C';
            c2++;
        }
        if(a=='C') {
            if(c3 == n3) {
                ans = 'C'; break;
            }
            if(s3[c3] == 'a') a='A';
            if(s3[c3] == 'b') a='B';
            if(s3[c3] == 'c') a='C';
            c3++;
        }
    }

    cout << ans << endl;

    return 0;
}
