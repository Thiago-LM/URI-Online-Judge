#include <stdio.h>

int main() {
    int V, N[11], i;

    scanf("%d", &V);
    N[0] = V;

    printf("N[0] = %d\n", N[0]);
    for(i = 1; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i-1] * 2);
        N[i] = N[i-1] * 2;
    }

    return 0;
} 
