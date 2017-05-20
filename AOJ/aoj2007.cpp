#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"

void disp(int x,int y,int z,int w) {
    if(x != 0) 
        cout << 10 << " " << x << "\n";
    if(y != 0) 
        cout << 50 << " " << y << "\n";
    if(z != 0) 
        cout << 100 << " " << z << "\n";
    if(w != 0) 
        cout << 500 << " " << w << "\n";
}

void solve(int cost) {
    vector<int> coin(4);
    rep(i,4) cin>>coin[i];

    int tmp = 114514;
    int x=0,y=0,z=0,w=0;
    rep(i,coin[0]+1) rep(j,coin[1]+1) rep(k,coin[2]+1) rep(l,coin[3]+1) {
        int pay = 10*i + 50*j + 100*k + 500*l;
        if(pay < cost) continue;

        int dif = pay - cost; // otsuri
        int get = 0;
        while(dif > 0) {
            if(dif >= 500)
                get++, dif -= 500;
            else if(dif >= 100)
                get++, dif -= 100;
            else if(dif >= 50)
                get++, dif -= 50;
            else if(dif >= 10)
                get++, dif -= 10;
        }
        if(get < tmp) {
            x=i; y=j; z=k; w=l;
            tmp = get;
            //dbg(get); dbg(pay);
        }
    }
    disp(x,y,z,w);
}

int main() {
    int cost;
    cin>>cost;
    while(1) {
        solve(cost);
        cin>>cost;
        if(cost != 0) puts("");
        else break;
    }
    return 0;
}
