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
    int n;
    cin >> n;
    if(n<=59) cout << "Bad" << endl;
    else if(n>=60 && n <= 89) cout << "Good" << endl;
    else if(n>=90 && n <= 99) cout << "Great" << endl;
    else cout << "Perfect" << endl;

    return 0;
}
