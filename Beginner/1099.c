#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X, Y, i, j, aux;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        int soma=0;
        scanf("%d %d", &X, &Y);
        if(Y > X){
            aux = X;
            X = Y;
            Y = aux;
        }
        for(j = Y + 1; j < X; j++){
            if(j % 2 != 0){
                soma += j;
            }
        }
        printf("%d\n", soma);
    }

    return 0;
} 
