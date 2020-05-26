#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, fibonacci[46];
    scanf(" %d", &N);

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    printf("%d %d", fibonacci[0], fibonacci[1]);

    for(i = 2; i < N; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        printf(" %d", fibonacci[i]);
    }

    printf("\n");

    return 0;
} 
