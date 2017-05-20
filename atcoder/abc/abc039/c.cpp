// unko
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

//string ban = "WBWBWWBWBWBW";

int main() {
    string s; cin >> s;

    string s1 = "WBWBWWBWBWBWWBWBWWBW";
    string s2 = "WBWWBWBWBWWBWBWWBWBW";
    string s3 = "WWBWBWBWWBWBWWBWBWBW";
    string s4 = "WBWBWBWWBWBWWBWBWBWW";
    string s5 = "WBWBWWBWBWWBWBWBWWBW";
    string s6 = "WBWWBWBWWBWBWBWWBWBW";
    string s7 = "WWBWBWWBWBWBWWBWBWWB";

    if(s==s1)
        cout << "Do" << "\n";
    if(s==s2)
        cout << "Re" << "\n";
    if(s==s3)
        cout << "Mi" << "\n";
    if(s==s4)
        cout << "Fa" << "\n";
    if(s==s5)
        cout << "So" << "\n";
    if(s==s6)
        cout << "La" << "\n";
    if(s==s7)
        cout << "Si" << "\n";
    

    return 0;
}
