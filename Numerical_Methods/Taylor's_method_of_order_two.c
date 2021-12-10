#include <stdio.h>
#include <math.h>

int main()
{
    double step, a;
    double x0 = 0;
    double y0 = 0.5;
    double h = 0.2;
    double xf = 2;
    
    step = (xf - x0) / h;
    
    for(int i=0;i<step;i++){
        printf("x%d = %.6f   y%d = %.6f   ", i, x0, i, y0);
        a = y0 + (0.22 * y0) - (0.22 * pow(x0, 2)) + 0.22 - (0.04 * x0);
        printf("y%d = %.6f\n", i + 1, a);
        x0 += h;
        y0 = a;
    }

    return 0;
}
