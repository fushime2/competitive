#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define mset(a,x) memset(a,x,sizeof(a))

const int INF = 114514, FIRST = 0;
int a[3][3], b[2][3], c[3][2];

// 最終局面で先手が得られるスコア
int calc_cost(){
    int ret = 0;
    rep(i,2) rep(j,3) if(a[i][j]==a[i+1][j]) ret += b[i][j];
    rep(i,3) rep(j,2) if(a[i][j]==a[i][j+1]) ret += c[i][j];
    return ret;
}

// 先手のスコアを計算する(minimax法)
int minimax(int depth){
    if(depth == 9) return calc_cost();
    int turn = depth % 2; // 0 -> first player
    int ret = (turn==FIRST ? -INF : INF);

    // 先手はその局面で得られるスコアが最大になるように選ぶ
    // 後手はその局面で得られるスコアが最小になるように選ぶ(先手ができるだけ高得点になるようにする)
    rep(i,3) rep(j,3) if(a[i][j] == -1){
        a[i][j] = turn;
        if(turn == FIRST){
            ret = max(ret, minimax(depth+1));
        } else {
            ret = min(ret, minimax(depth+1));
        }
        a[i][j] = -1;
    }
    return ret;
}

int main() {
    int tot = 0;
    rep(i,2) rep(j,3) cin>>b[i][j], tot += b[i][j];
    rep(i,3) rep(j,2) cin>>c[i][j], tot += c[i][j];

    mset(a, -1);

    int first_score = minimax(0);
    cout << first_score << endl;
    cout << tot - first_score << endl;

    return 0;
}
