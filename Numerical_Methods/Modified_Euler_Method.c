#include <stdio.h>
#include <math.h>

int main()
{
    double step, oy, y1;
    double x0 = 0;
    double y0 = 0.5;
    double h = 0.2;
    double xf = 2;
    
    step = (xf - x0) / h;
    
    for(int i=0;i<step;i++){
        printf("x%d = %.7f   y%d = %.7f   ", i, x0, i, y0);
        oy = y0 - pow(x0, 2) + 1;
        y1 = y0 + h * (oy + (y0 + h * oy) - pow(x0 + h, 2) + 1) / 2;
        printf("y%d = %.7f\n", i + 1, y1);
        x0 += h;
        y0 = y1;
    }

    return 0;
}
