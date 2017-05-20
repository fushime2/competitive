#include <stdio.h>

int main(void)
{
    int h1, h2, m1, m2, s1, s2, i;
    int h, m, s;
    for(i=0; i<3; i++) {
        scanf("%d%d%d%d%d%d", &h1, &m1, &s1, &h2, &m2, &s2);
        if(s1<=s2) {
            s = s2-s1;
        } else {
            s = s2+60-s1;
            m2--;
        }
        if(m1<=m2) {
            m = m2-m1;
        } else {
            m = m2+60-m1;
            h2--;
        }
        h = h2-h1;

        printf("%d %d %d\n", h, m, s);
    }

    return (0);
}
