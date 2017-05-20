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
    double w;
    while(cin>>w) {
        if(w <= 48.00) {
            cout << "light fly" << endl;
        } else if(48.00 < w && w <= 51.00) {
            cout << "fly" << endl;
        } else if(51.00 < w && w <= 54.00) {
            cout << "bantam" << endl;
        } else if(54.00 < w && w <= 57.00) {
            cout << "feather" << endl;
        } else if(57.00 < w && w <= 60.00) {
            cout << "light" << endl;
        } else if(60.00 < w && w <= 64.00) {
            cout << "light welter" << endl;
        } else if(64.00 < w && w <= 69.00) {
            cout << "welter" << endl;
        } else if(69.00 < w && w <= 75.00) {
            cout << "light middle" << endl;
        } else if(75.00 < w && w <= 81.00) {
            cout << "middle" << endl;
        } else if(81.00 < w && w <= 91.00) {
            cout << "light heavy" << endl;
        } else {
            cout << "heavy" << endl;
        }
    }

    return 0;
}
