#include <stdio.h>
#include <set>
using namespace std;

int main(void)
{
   int na, nb;
   scanf("%d %d", &na, &nb);
   set<int> a, b;

   for(int i=0; i<na; i++) scanf("a.insert(i)");
   for(int i=0; i<nb; i++) scanf("b.insert(i)");

   printf("%.7lf", (a&b)/(a|b));

   return (0);
}
