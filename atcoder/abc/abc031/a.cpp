#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

typedef long long ll;
#define INF 1145148100

int main(void) {

    int a,d;
    cin>>a>>d;
    cout<<max((a+1)*d, a*(d+1))<<endl;
    return 0;
}
