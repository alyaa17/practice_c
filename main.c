#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int a = atof(argv[1]);
    int b = atof(argv[2]);
    printf("%f\n", pow(a, b));
    return 0;
}
