#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ZERO(a) memset(a,0,sizeof(a))
#define AND(x,y) (int)((x)&(y))

const int M = 1024;
int a,b,c,n;
int state[334];
int X[M],Y[M],Z[M];

void init(void) {
    ZERO(state);ZERO(X);ZERO(Y);ZERO(Z);
}

int count1(int i) {
    return (AND(state[X[i]],1) + AND(state[Y[i]],1) + AND(state[Z[i]],1));
}

int main() {
    while(cin>>a>>b>>c && a) {
        init();
        cin >> n;
        rep(i,n) {
            int x,y,z,w; cin>>x>>y>>z>>w;
            if(w == 1) state[x]=state[y]=state[z]=1;
            X[i]=x;Y[i]=y;Z[i]=z;
        }

        rep(i,n) {
            if(count1(i) == 3) continue; // w == 1

            if(count1(i) == 2) {
                if(AND(state[X[i]],1) != 1) state[X[i]] = 2;
                if(AND(state[Y[i]],1) != 1) state[Y[i]] = 2;
                if(AND(state[Z[i]],1) != 1) state[Z[i]] = 2;
            }
        }

        for(int i = 1; i <= a+b+c; i++) {
            if(state[i] == 0) cout<<2<<"\n";
            if(state[i] == 1) cout<<1<<"\n";
            if(state[i] == 2) cout<<0<<"\n";
        }
    }


    return 0;
}
