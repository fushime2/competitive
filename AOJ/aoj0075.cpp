#include <cstdio>
using namespace std;
int main(void)
{
    int num;
    double w,h;
    while(~scanf("%d,%lf,%lf",&num,&w,&h)) {
        double bmi = w / h / h;
        if(bmi >= 25.0)
            printf("%d\n",num);
    }
    return 0;
}
