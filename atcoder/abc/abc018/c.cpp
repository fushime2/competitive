#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)(n);i++)

int r,c,K;
int a[514][514];

bool check(int i, int j, int k){
    return (a[i][j]>=k and a[i+1][j]>=k
            and a[i-1][j]>=k and a[i][j-1]>=k and a[i][j+1]>=k);
}

int main(){
    memset(a,0,sizeof(a));
    cin>>r>>c>>K;
    rep(i,r){
        string s; cin>>s;
        rep(j,c){
            a[i+1][j+1] = (s[j] == 'o');
        }
    }

    for(int k=1; k<K; k++){
        for(int i=1; i<=r; i++) {
            for(int j=1; j<=c; j++) {
                if(check(i,j,k)) a[i][j] = k+1;
            }
        }
    }

    int res = 0;
    for(int i=1; i<=r; i++)
        for(int j=1; j<=c; j++)
            res += (a[i][j] == K);

    cout << res << endl;
    return 0;
}
