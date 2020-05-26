#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, N, i;
    double fibonacci[100];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(i = 2; i <= 60; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    scanf(" %d", &T);

    for(i = 0; i < T; i++){
        scanf(" %d", &N);
        printf("Fib(%d) = %.0lf\n", N, fibonacci[N]);
    }

    return 0;
} 
