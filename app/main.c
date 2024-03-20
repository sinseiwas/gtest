#include <stdio.h>
#include <stdlib.h>

#include "square.h"

int main() {
    double arr[2];
    if (square(arr, 1, -5, 6)){
        printf("%f %f\n", arr[0], arr[1]);
    }
    else{
        printf("square not square");
    }
    return 0;
}