#include <stdio.h>
#include <math.h>

int main()
{
    double step, k1, k2, k3, k4, y1;
    double x0 = 0;
    double y0 = 0.5;
    double h = 0.2;
    double xf = 2;
    
    step = (xf - x0) / h;
    
    for(int i=0;i<step;i++){
        printf("x%d = %.7f   y%d = %.7f   ", i, x0, i, y0);
        k1 = h * (y0 - pow(x0, 2) + 1);
        k2 = h * ((y0 + 0.5 * k1) - pow(x0 + h * 0.5, 2) + 1);
        k3 = h * ((y0 + 0.5 * k2) - pow(x0 + h * 0.5, 2) + 1);
        k4 = h * ((y0 + k3) - pow(x0 + h, 2) + 1);
        y1 = y0 + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        printf("y%d = %.7f\n", i + 1, y1);
        x0 += h;
        y0 = y1;
    }

    return 0;
}
