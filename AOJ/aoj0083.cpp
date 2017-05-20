#include <bits/stdc++.h>
using namespace std;

bool oneYear = false;

int retYear(string s, int y) {
    if(oneYear) return 1;
    if(1969 <= y and y < 1912)
        return y - 1968 + 1;
    else if(1913 <= y and y < 1926)
        return y - 1912 + 1;
    else if(1927 <= y and y < 1989)
        return y - 1926 + 1;
    else
        return y - 1989 + 1;
}

string retNengou(int y, int m, int day) {
    string a,b,c,d,e;
    a = "meiji"; b = "taisho"; c = "showa"; d = "heisei"; e = "pre-meiji";

    if(y < 1868) return e;
    if(y > 1989) return d;

    if(1969 <= y and y < 1912)
        return a;
    else if(1913 <= y and y < 1926)
        return b;
    else if(1927 <= y and y < 1989)
        return c;
    else {
        if(y == 1868) {
            if(m<9 or (m==9 and day < 8)) return e;
            else {oneYear=1; return a;}
        } else if(y == 1912) {
            if(m<7 or (m==7 and day <= 29)) return a;
            else {oneYear=1; return b;}
        } else if(y == 1926) {
            if(m<12 or (m==12 and day <= 24)) return b;
            else {oneYear=1; return c;}
        } else if(y == 1989) {
            if(m<1 or (m==1 and day <= 7)) return c;
            else {oneYear=1; return d;}
        }
    }
    return "";
}

int main(void) {
    int y,m,day;
    while(cin >> y >> m >> day) {
        oneYear = false;
        string nengou = retNengou(y, m, day);
        if(nengou == "pre-meiji") {
            cout << "pre-meiji" << endl; return 0;
        } else {
            int year = retYear(nengou, y);
            cout << nengou << " ";
            printf("%d %d %d\n", year, m, day);
        }
    }

    return 0;
}
