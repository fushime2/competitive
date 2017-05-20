#include <iostream>
#include <cstdio>

using namespace std;

typedef long long ll;
#define INF 1145148100

int main(void) {
    int N, M;
    cin >> N >> M;
    if(M < 2*N or 4*N < M) {
        printf("%d %d %d\n",-1,-1,-1);
        return 0;
    }

    if(M <= 3*N) {
        printf("%d %d %d\n", N - (M - 2*N), M - 2*N, 0);
    } else if((M - 2*N) % 2 == 0) {
        printf("%d %d %d\n", N - (M - 2*N)/2, 0, (M - 2*N)/2);
    } else {
        printf("%d %d %d\n", N - 1 - (M - 2*N)/2, 1, (M - 2*N)/2);
    }

    return 0;
}
