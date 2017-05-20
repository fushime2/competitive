#include <iostream>
#include <map>
#include <vector>
#include <cstdio>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    int n;
    int a,b,c,d,e,f;
    a=b=c=d=e=f=0;
    double tmax, tmin;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> tmax >> tmin;
        if(tmax>=35) a++;
        else if(30<=tmax && tmax<35) b++;
        else if(25<=tmax && tmax<30) c++;

        if(tmin>=25) d++;
        if(tmin < 0 && tmax>=0) e++;
        if(tmax<0) f++;
    }

    printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);

    return 0;
}
