#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"

string f1(int deg) {
    string dir;
    if(112.5<=deg and deg<337.5) dir="NNE";
    else if(337.5<=deg and deg<562.5) dir="NE";
    else if(562.5<=deg and deg<787.5) dir="ENE";
    else if(787.5<=deg and deg<1012.5) dir="E";
    else if(1012.5<=deg and deg<1237.5) dir="ESE";
    else if(1237.5<=deg and deg<1462.5) dir="SE";
    else if(1462.5<=deg and deg<1687.5) dir="SSE";
    else if(1687.5<=deg and deg<1912.5) dir="S";
    else if(1912.5<=deg and deg<2137.5) dir="SSW";
    else if(2137.5<=deg and deg<2362.5) dir="SW";
    else if(2362.5<=deg and deg<2587.5) dir="WSW";
    else if(2587.5<=deg and deg<2812.5) dir="W";
    else if(2812.5<=deg and deg<3037.5) dir="WNW";
    else if(3037.5<=deg and deg<3262.5) dir="NW";
    else if(3262.5<=deg and deg<3487.5) dir="NNW";
    else dir="N";

    return dir;
}

int f2(int dis) {
    int w = 0;
    dis *= 100;
    dis /= 60;
    dis += 5;
    dis /= 10;
    if(dis <= 2) {
        w = 0;
    } else if(dis <= 15) {
        w = 1;
    } else if(dis <= 33) {
        w = 2;
    } else if(dis <= 54) {
        w = 3;
    } else if(dis <= 79) {
        w = 4;
    } else if(dis <= 107) {
        w = 5;
    } else if(dis <= 138) {
        w = 6;
    } else if(dis <= 171) {
        w = 7;
    } else if(dis <= 207) {
        w = 8;
    } else if(dis <= 244) {
        w = 9;
    } else if(dis <= 284) {
        w = 10;
    } else if(dis <= 326) {
        w = 11;
    } else {
        w = 12;
    }
    return w;
}

int main() {
    int deg, dis;
    while(cin>>deg>>dis) {
        string dir = f1(deg);
        int w = f2(dis);
        if(w == 0) {
            cout << "C" << " " << w << "\n";
        } else {
            cout << dir << " " << w << "\n";
        }
    }
    return 0;
}
