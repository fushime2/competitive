#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define pb push_back

struct Team {
    int num=0, ac=0, pen=0;
    int wa[15] = {0};
};

void solve(int T,int P,int R) {
    vector<Team> teams(T);
    rep(i,T) teams[i].num=i+1;
    rep(i,R) {
        int tm, prg, time;
        string msg;
        cin>>tm>>prg>>time>>msg;
        tm--; prg--;
        if(msg == "WRONG") {
            teams[tm].wa[prg]++;
        } else {
            teams[tm].ac++;
            teams[tm].pen += teams[tm].wa[prg] * 1200 + time;
        }
    }
    rep(i,T) rep(j,T-1) {
        if(teams[j].ac < teams[j+1].ac) swap(teams[j], teams[j+1]);
        if(teams[j].ac == teams[j+1].ac
                and teams[j].pen > teams[j+1].pen) swap(teams[j], teams[j+1]);
    }

    for(auto& team : teams) {
        cout << team.num << " " << team.ac << " " << team.pen << "\n";
    }
}

int main() {
    int T,P,R;
    while(cin>>T>>P>>R, T) solve(T,P,R);
    return 0;
}
