#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

#define ALL(x) (x).begin(),(x).end()

vector<int> a1, a2;
set<int> st;

int main() {
    int a,b,cur;
    scanf("%d,%d",&a,&b);
    a1.push_back(a);
    st.insert(a);
    cur = b;

    while(~scanf("%d,%d",&a,&b)) {
        if(cur > b) goto next;
        a1.push_back(a);
        st.insert(a);
        cur = b;
    }
    while(~scanf("%d,%d",&a,&b)) {
next:
        a2.push_back(a);
        st.insert(a);
    }

    for(auto &i: st) {
        int cnt1 = count(ALL(a1), i);
        int cnt2 = count(ALL(a2), i);
        if(cnt1 >= 1 and cnt2 >= 1)
            printf("%d %d\n", i, cnt1 + cnt2);
    }

    return 0;
}
