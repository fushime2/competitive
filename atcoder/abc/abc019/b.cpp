#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int i = 0;
    while(i < n){
        char t = s[i];
        int j = i;
        while(s[i] == t) i++;
        cout<<t<<i-j;
    }
    puts("");

    return 0;
}
