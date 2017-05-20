#include <iostream>

using namespace std;

const double EPS = 1e-12;

double abs_d(double x) {
    return (x < 0 ? -x : x);
}

int main() {
    double x[4], y[4];
    while(cin>>x[0]>>y[0]) {
        for(int i=1; i<4; i++)
            cin >> x[i] >> y[i];

        double ab1 = x[1] - x[0];
        double ab2 = y[1] - y[0];
        double cd1 = x[3] - x[2];
        double cd2 = y[3] - y[2];
        double naiseki = ab1*cd1 + ab2*cd2;

        if(abs_d(naiseki) < EPS)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
