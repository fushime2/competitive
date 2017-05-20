#include <stdio.h>

int main() {
    double a, b, c, d, e, f;
    double x=0, y=0; // int‚¶‚áƒ_ƒ, ‰Šú‰»‚µ‚È‚¢‚Æƒ_ƒ

    while(scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF) {
        x = (c*e-b*f)/(a*e-b*d);
        y = (a*f-c*d)/(a*e-b*d);
        if(x == -0.0) x=0.0;
        if(y == -0.0) y=0.0;
        printf("%.3lf %.3lf\n", x, y);
    }

    return 0;
}
