#include <stdio.h>

int main() {
    int i;
    double S = 0;

    for(i = 1; i <= 100; i++) {
        S += ((double)1 / (double)i);
    }

    printf("%.2lf\n", S);

    return 0;
} 
