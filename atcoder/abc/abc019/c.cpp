#include <set>
#include <cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    set<int> s;
    for(int i=0; i<n; i++) {
        int a; scanf("%d", &a);
        while(a % 2 == 0) {
            a /= 2;
        }
        s.insert(a);
    }
    printf("%d\n", (int)s.size());

    return 0;
}
