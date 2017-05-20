#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <memory>

using namespace std;
#define M 10

int step=0;
char field[M+5][M+5];
bool p[M+5][M+5];


void dfs(int i, int j) {
    step++;
    p[i][j] = true;
    if(i < 0 || i>=M || j<0 || j>=M)
        return;
    if(field[i][j+1] == 'o' && p[i][j+1] == false)
        dfs(i, j+1);
    if(field[i][j-1] == 'o' && p[i][j-1] == false)
        dfs(i, j-1);
    if(field[i+1][j] == 'o' && p[i+1][j] == false)
        dfs(i+1, j);
    if(field[i-1][j] == 'o' && p[i-1][j] == false)
        dfs(i-1, j);

    return ;

}

int main(void)
{
    ios::sync_with_stdio(false);
    for(int i=0; i<M; i++)
        cin >> field[i];

    // count o
    int numo = 0;
    for(int i=0; i<M; i++) {
        for(int j=0; j<M; j++) {
            if(field[i][j] == 'o')
                numo++;
        }
    }

    bool ok = false;
    for(int i=0; i<M; i++) {
        for(int j=0; j<M; j++) {
            if(field[i][j] == 'x') {
                step = 0;
                memset(p, false, sizeof(p));
                dfs(i, j);
                if(step > numo) {
                    ok = true;
                    break;
                }
            }
        }
    }

    if(ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}
