#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, N, aux, sum, i, j=1;

    while(scanf(" %d %d", &M, &N) && M > 0 && N > 0){
        if(M > N){
            aux = N;
            N = M;
            M = aux;
        }
        sum = 0;
        for(i = 0; i < (N - M) + 1; i++){
            printf("%d ", M+i);
            sum += (M + i);
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
} 
