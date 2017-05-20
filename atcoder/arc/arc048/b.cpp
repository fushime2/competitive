#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 1145148100
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

const int MAX_N = 100030;
vector<int> r, h;
int c[MAX_N][4];
ll sm[MAX_N];

int main(void) {
    int n;
    cin >> n;
    rep(i,n) {
        int a,b; scanf("%d%d",&a,&b);
        r.pb(a); h.pb(b);
        c[a][b]++;
        sm[a]++;
    }

    // ruisekiwa
    for(int i = MAX_N; i>=0; i--) {
        sm[i-1] += sm[i];
    }
    
    /*
    rep(i,n) {
        cout << sm[i] << " ";
    }
    puts("");
    */


    rep(i,n) {
        int t = r[i];
        int s = h[i];
        int hiki = 0;
        if(c[t][s] >= 2) hiki += c[t][s] - 1;

        int loss = sm[t+1];
        if(s == 1) loss += c[t][3];
        if(s == 2) loss += c[t][1];
        if(s == 3) loss += c[t][2];
        
        int win = n-1 - loss - hiki;

        printf("%d %d %d\n", win, loss, hiki);
    }


    return 0;
}
