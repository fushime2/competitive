#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SZ(x) (int)(x).size()
#define mset(a,x) memset(a,x,sizeof(a))
#define dbg(x) cout<<#x<<": "<<(x)<<"\n"
#define OUT(x) cout<<(x)<<"\n"
#define FASTIO cin.tie(0),ios::sync_with_stdio(0)
#define pb push_back
#define mp make_pair

int n;

int main() {
	FASTIO;
	cin >> n;
	vector<ll> a(n+2);
	rep(i,n) cin>>a[i];

	ll even=0, odd=0;
	rep(i,n){
		if(a[i]%2 == 0) ++even;
		else ++odd;
	}

	if(odd % 2 == 0){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}


    return 0;
}
