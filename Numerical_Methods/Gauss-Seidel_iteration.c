#include <stdio.h>

int main()
{
    double x1, x2, x3, a, b, c;
    int j;

    printf("Value x1 : ");
    scanf("%lf", &x1);
    printf("Value x2 : ");
    scanf("%lf", &x2);
    printf("Value x3 : ");
    scanf("%lf", &x3);
    printf("Number of iteration : ");
    scanf("%d", &j);

    for (int i = 0; i < j; i++)
    {
        a = (7 - 2 * x2 + x3) / 10;
        x1 = a;
        b = (-4 - x1 - 3 * x3) / 8;
        x2 = b;
        c = (9 + 2 * x1 + x2) / 10;
        x3 = c;
        printf("%d     %.5f     %.5f     %.5f\n", i + 1, a, b, c);
    }
    
    return 0;
}
