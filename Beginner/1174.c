#include <stdio.h>

int main() {
    int i, P[101], j = 0;
    float A[101];

    for(i = 0; i < 100; i++) {
        scanf("%f", &A[i]);
        if(A[i] <= 10) {
            P[j] = i;
            j++;
        }
    }

    for(i = 0; i < j; i++) {
        printf("A[%d] = %.1f\n", P[i], A[P[i]]);
    }

    return 0;
} 
