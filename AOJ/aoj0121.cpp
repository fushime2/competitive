#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define foreach(itr,a) for(__typeof((a).begin()) itr=(a).begin(); itr!=(a).end(); itr++)
#define ALL(x) (x).begin(), (x).end()
#define pb push_back

int dx[] = {1,-1,4,-4};
map<string, int> m;

void bfs() {
    queue<string> que;

    que.push("01234567");
    while(que.size()) {
        string q = que.front(); que.pop();
        int x0 = q.find('0');
        rep(i,4) {
            string t = q;
            int nx = x0 + dx[i];
            if(nx<0 or 7<nx or (x0==3 and i==0) or (x0==4 and i==1)) continue;
            t[x0] = t[nx];
            t[nx] = '0';
            if(m.count(t)) continue;
            m[t] = m[q] + 1;
            que.push(t);
        }
    }
}

int main() {
    string s;
    bfs();
    while(getline(cin, s)) {
        s.erase(remove(ALL(s), ' '), s.end());
        cout << m[s] << endl;
    }

    return 0;
}
