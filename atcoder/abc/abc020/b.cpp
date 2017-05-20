#include <cstdio>
using namespace std;

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = b;
    while(b > 0){
        a *= 10;
        b /= 10;
    }
    printf("%d\n", a+a + c+c);
    return 0;
}
