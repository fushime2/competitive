#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define pb push_back

struct Team {
    int num=0, ac=0, pen=0;
    int wa[15] = {0};
};

void solve(int M,int T,int P,int R) {
    vector<Team> teams(T+2);
    rep(i,T) teams[i].num=i+1;
    rep(i,R) {
        int time,tm, prg, msg;
        cin>>time>>tm>>prg>>msg;
        tm--; prg--;
        if(msg != 0) {
            teams[tm].wa[prg]++;
        } else {
            teams[tm].ac++;
            teams[tm].pen += teams[tm].wa[prg] * 20 + time;
        }
    }
    rep(i,T) rep(j,T-1) {
        if(teams[j].ac < teams[j+1].ac) swap(teams[j], teams[j+1]);
        if(teams[j].ac == teams[j+1].ac
                and teams[j].pen > teams[j+1].pen) swap(teams[j], teams[j+1]);
        if(teams[j].ac == teams[j+1].ac
                and teams[j].pen == teams[j+1].pen
                and teams[j].num < teams[j+1].num) swap(teams[j], teams[j+1]);
    }

    /*
    for(auto& team : teams) {
        cout << team.num << " " << team.ac << " " << team.pen << "\n";
    }
    */
    rep(i,T) {
        cout << teams[i].num;
        if(i+1 == T)
            puts("");
        else if(teams[i].ac == teams[i+1].ac and teams[i].pen == teams[i+1].pen)
            cout << '=';
        else
            cout << ',';
    }
}

int main() {
    int M,T,P,R;
    while(cin>>M>>T>>P>>R, T) solve(M,T,P,R);
    return 0;
}
