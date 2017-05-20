#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> mat;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define OUT(x) cout<<(x)<<"\n"


mat mul(mat &A, mat &B){
    mat C(A.size(), vi(B[0].size()));
    rep(i, A.size()){
        rep(k, B.size()){
            rep(j, B[0].size()){
                C[i][j] ^= A[i][k] & B[k][j];
            }
        }
    }
    return C;
}

mat pow(mat A, ll n){
    mat B(A.size(), vi(A.size()));
    for(int i=0; i<(int)A.size(); ++i){
        B[i][i] = (1LL << 32) - 1;
    }
    while(n > 0){
        if(n & 1) B = mul(B, A);
        A = mul(A, A);
        n >>= 1;
    }
    return B;
}

int main() {
    int k, m;
    cin >> k >> m;
    vi a(k), c(k);
    for(auto& i : a) cin >> i;
    for(auto& i : c) cin >> i;
    if(m <= k){
        OUT(a[m-1]);
        return 0;
    }

    mat A(k, vi(k,0)), B(k, vi(1));
    rep(i,k){
        A[0][i] = c[i];
        B[i][0] = a[k - i - 1];
    }

    FOR(i,1,k) A[i][i-1] = (1LL<<32) - 1;
    A = pow(A, m - k);

    OUT(mul(A,B)[0][0]);


    return 0;
}
