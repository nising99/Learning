#include <stdio.h>
#include <math.h>

int main()
{
    double x0, y0, h, xf, a, step;

    printf("Value x0 : ");
    scanf("%lf", &x0);
    printf("Value y0 : ");
    scanf("%lf", &y0);
    printf("Value h : ");
    scanf("%lf", &h);
    printf("Value final x : ");
    scanf("%lf", &xf);

    step = (xf - x0) / h;

    for (int i = 0; i < step; i++) {
        printf("x%d = %.7f   y%d = %.7f   ", i, x0, i, y0);
        a = y0 + h * (y0 - pow(x0, 2) + 1);
        printf("y%d = %.7f\n", i + 1, a);
        x0 += h;
        y0 = a;
    }
    
    return 0;
}
