#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y, aux, i, sum=0;

    scanf(" %d %d", &X, &Y);

    if(Y > X){
        aux = X;
        X = Y;
        Y = aux;
    }

    for(i = Y; i <= X; i++){
        if(i%13 != 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
} 
