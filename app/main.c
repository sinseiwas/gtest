#include <stdio.h>
#include <stdlib.h>

#include "square.h"

int main() {
    double mas[2];
    if (square(mas, 1, -5, 6)){
        printf("%f %f\n", mas[0], mas[1]);
    }
    else{
        printf("square not square");
    }
    return 0;
}
