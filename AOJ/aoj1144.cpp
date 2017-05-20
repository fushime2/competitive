#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define foreach(itr,a) for(__typeof((a).begin()) itr=(a).begin(); itr!=(a).end(); itr++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int w, h, ans=0;
int sx, sy;
int f[21][21];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

bool ng(int x, int y) {
    return (x<0 or y<0 or x>=w or y>=h);
}

void dfs(int x, int y, int depth) {
    if(depth+1 >= ans) return;

    rep(i, 4) {
        int nx = x + dx[i], ny = y + dy[i];

        if(!ng(nx,ny) and f[ny][nx] != 1) {
            while(!ng(nx,ny)) {
                // goal
                if(f[ny][nx] == 3) {
                    ans = min(ans, depth+1);
                    return;
                }

                if(f[ny][nx] == 1) {
                    f[ny][nx] = 0;
                    dfs(nx - dx[i], ny - dy[i], depth+1);
                    f[ny][nx] = 1;
                    break;
                }
                nx += dx[i]; ny += dy[i];
            }
        }
    }

    return ;
}

int main() {
    while(cin>>w>>h and w) {
        rep(i,h) rep(j,w) {
            cin >> f[i][j];
            if(f[i][j] == 2) {
                sx=j; sy=i;
                f[i][j] = 0;
            }
        }
        
        ans = 11;
        dfs(sx, sy, 0);
        if(ans <= 10)
            cout << ans << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}
