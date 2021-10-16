#include <stdio.h>
#include <math.h>

int main()
{
    double x, fx, dfx, newx;
    int j;

    printf("Value x : ");
    scanf("%lf", &x);
    printf("Number of iteration : ");
    scanf("%d", &j);

    for (int i = 0; i < j; i++)
    {
        fx = pow(x, 3) + x - 6;
        dfx = 3 * pow(x, 2) + 1;
        printf("%d     %.5f     %.5f     %.5f\n", i + 1, x, fx, dfx);
        newx = x - (fx / dfx);
        x = newx;
    }
    
    return 0;
}
