//#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
//typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define OUT(x) cout<<(x)<<"\n"
#define pb push_back
#define mp make_pair

int x1,x2,x3;
int y1,y2,y3;
int r;

double dist(int x, int y){
    return (x1-x)*(x1-x) + (y1-y)*(y1-y);
}

bool ny(){
    return (x2<=(x1-r) and x3>=(x1+r) and y2<=(y1-r) and y3>=(y1+r));
}

bool yn(){
    return (r*r >= dist(x2,y2) and r*r >= dist(x2,y3))
    and (r*r >= dist(x3,y2) and r*r >= dist(x3,y3));
}

int main() {
    cin>>x1>>y1>>r>>x2>>y2>>x3>>y3;
    if(ny()){
        puts("NO");
        puts("YES");
    }
    else if(yn()){
        puts("YES");
        puts("NO");
    }
    else{
        puts("YES");
        puts("YES");
    }
    return 0;
}
