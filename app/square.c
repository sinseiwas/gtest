#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "square.h"

int square(double* mas, double a, double b, double c){
    double d = b * b - 4 * a * c;
    if (d<0 || a == 0);
    d = sqrt(d);
    mas[0] = (-b + d) / (2 * a);
    mas[1] = (-b - d) / (2 * a);
    return 1;
}
