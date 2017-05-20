#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX_N = 100002;

int c[MAX_N][4];
ll sm[MAX_N]; // 累積和

int main(void) {
    int n;
    scanf("%d", &n);
    int r[n], h[n];
    for(int i=0; i<n; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        r[i] = a; h[i] = b;
        c[a][b]++;
        sm[a]++;
    }

    // i 番目の人よりレーティングが大きい人の数 = sm[i+1]
    for(int i = MAX_N - 1 ; i>0; i--) sm[i-1] += sm[i];

    for(int i=0; i<n; i++) {
        int t = r[i], s = h[i];
        int safe = 0;
        if(c[t][s] >= 2) safe += c[t][s] - 1;

        int lose = sm[t+1];
        if(s == 1) lose += c[t][3];
        if(s == 2) lose += c[t][1];
        if(s == 3) lose += c[t][2];

        int win = n-1 - lose - safe;

        printf("%d %d %d\n", win, lose, safe);
    }

    return 0;
}
