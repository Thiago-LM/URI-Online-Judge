#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X, Y, i;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d %d", &X, &Y);
        if(Y != 0)
            printf("%.1f\n", (double)X/Y);
        else
            printf("divisao impossivel\n");
    }

    return 0;
} 
