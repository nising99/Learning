#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
    double x0, x1, x2, a0, a1, a2, h0, h1, c1, d0, d1, b0, b1;

    printf("Value x0 : ");
    scanf("%lf", &x0);

    printf("Value y0 : ");
    scanf("%lf", &a0);
    
    printf("Value x1 : ");
    scanf("%lf", &x1);
    
    printf("Value y1 : ");
    scanf("%lf", &a1);
    
    printf("Value x2 : ");
    scanf("%lf", &x2);
    
    printf("Value y2 : ");
    scanf("%lf", &a2);

    h0 = x1 - x0;
    h1 = x2 - x1;

    c1 = ((3 * (a2 - a1) / h1) - (3 * (a1 - a0) / h0)) / (2 * (h0 + h1));

    d0 = c1 / (3 * h0);
    d1 = -c1 / (3 * h1);

    b0 = ((a1 - a0) / h0) - ((h0 * c1) / 3);
    b1 = ((a2 - a1) / h1) - (h1 * 2 * c1 / 3);

    printf("a0 : %f\n", a0);
    printf("b0 : %f\n", b0);
    printf("d0 : %f\n", d0);
    printf("a1 : %f\n", a1);
    printf("b1 : %f\n", b1);
    printf("c1 : %f\n", c1);
    printf("d1 : %f\n", d1);

    system("pause");
    return 0;
}
