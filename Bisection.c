#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, fa, fb, fc;
    int j;

    printf("Value a (y is negative) : ");
    scanf("%lf", &a);
    printf("Value b (y is positive) : ");
    scanf("%lf", &b);
    printf("Number of iteration : ");
    scanf("%d", &j);

    for (int i = 0; i < j; i++)
    {
        fa = pow(a, 3) + a - 6;
        fb = pow(b, 3) + b - 6;
        c = (a + b) / 2;
        fc = pow(c, 3) + c - 6;
        printf("%d   %.5f     %.5f     %.5f     %.5f     %.5f     %.5f\n", i + 1, a, fa, b, fb, c, fc);
        if (fc < 0)
        {
            a = c;
        }
        else if (fc > 0)
        {
            b = c;
        }
        else
        {
            break;
        }
    }
    
    return 0;
}
