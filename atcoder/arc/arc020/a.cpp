#include <iostream>
#include <cmath>
#include <map>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    
    a=abs(a); b=abs(b);
    if(a<b) cout<<"Ant"<<endl;
    else if(a>b) cout<<"Bug"<<endl;
    else cout<<"Draw"<<endl;

    return 0;
}
