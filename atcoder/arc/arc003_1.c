#include <stdio.h>

int main(void)
{
   int i, n, s=0;
   scanf("%d", &n);

   for(i=n; i>=1; i--)
       s = s+i;

   printf("%d\n", s);
   
   return (0);
}
