#include <cstdio>
using namespace std;

int main(){
    char s[100];
    int n;
    scanf("%s%d", s, &n);
    --n;
    printf("%c%c\n", s[n/5], s[n%5]);
    return 0;
}
