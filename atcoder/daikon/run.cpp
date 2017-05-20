#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define ZERO(a) memset(a,0,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define pb push_back
#define eb emplace_back
#define mp make_pair

int A[31][31];
int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};

bool ng(int x, int y) {
    return (x<0 or 30<=x or y<0 or 30<=y);
}

void dfs(int x, int y) {
    --A[y][x];
    printf("%d %d\n", y+1, x+1);
    rep(i,4) {
        int nx = x+dx[i], ny = y+dy[i];
        if(!ng(nx,ny) and A[ny][nx] == A[y][x] and A[ny][nx]!=0) {
            dfs(nx,ny);
        }
    }
}

int main() {
    ZERO(A);
    rep(y,30) rep(x,30) {
        scanf("%d", &A[y][x]);
    }

    rep(y,30) {
        rep(x,30) {
            while(A[y][x] > 0) {
                dfs(x,y);
            }
        }
    }

    rep(y,30) {
        rep(x,30) {
            while(A[y][x] > 0) {
                dfs(x,y);
            }
        }
    }

    return 0;
}
