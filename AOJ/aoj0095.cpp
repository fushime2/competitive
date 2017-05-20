#include <iostream>
#define min(a,b) ((a)>(b)?(b):(a))

using namespace std;

int main() {
    int n; cin>>n;
    int ta=0, tv=0;
    for(int i=0; i<n; ++i) {
        int a,v; cin>>a>>v;
        if(v > tv) {
            ta = min(ta,a);
            tv = v;
        }
    }

    cout << ta << " " << tv << endl;

    return 0;
}
