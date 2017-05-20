#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

int R, C, K, N;

int main() {
    cin>>R>>C>>K>>N;
    vector<P> candys(N);
    vector<int> row(R,0), col(C,0);
    rep(i,N){
        int r,c; scanf("%d%d",&r,&c);
        --r; --c;
        candys[i] = make_pair(c,r);
        ++row[r]; ++col[c];
    }

    vector<int> cnt_r(N+1,0), cnt_c(N+1,0);
    // 行数の総和
    for(int& y : row) ++cnt_r[y];
    for(int& x : col) ++cnt_c[x];

    ll ans = 0;
    for(int i=0; i<=K; ++i){
        ans += cnt_r[i] * cnt_c[K-i]; // 重複して数えた分の和
    }

    for(auto& candy : candys){
        ll cnt = row[candy.second] + col[candy.first];
        if(cnt == K)
            --ans; // 上でカウントしてるから減らす
        else if(cnt == K + 1)
            ++ans; // 上でカウントしてないケースをカウントする
    }

    cout << ans << endl;

    return 0;
}
